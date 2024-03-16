
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
from std_msgs.msg import String

class ImagePublisher(Node):
  """
  Create an ImagePublisher class, which is a subclass of the Node class.
  """
  def __init__(self):
    """
    Class constructor to set up the node
    """
    super().__init__('image_publisher')
       
    self.publisher_ = self.create_publisher(Image, 'video_frames', 10)
    self.publisher2_ = self.create_publisher(String, 'topic', 10)
       
    timer_period = 0.05
       
    self.timer = self.create_timer(timer_period, self.timer_callback)
          
    self.cap = cv2.VideoCapture(0)
          
    self.br = CvBridge()
    ret, frame = self.cap.read()
    ret, frame = self.cap.read()

    self.bbox = cv2.selectROI("Object Tracking", frame, False)

    roi = frame[self.bbox[1]:self.bbox[1] + self.bbox[3], self.bbox[0]:self.bbox[0] + self.bbox[2]]
    roi_hsv = cv2.cvtColor(roi, cv2.COLOR_BGR2HSV)
    self.roi_hist = cv2.calcHist([roi_hsv], [0, 1], None, [180, 256], [0, 180, 0, 256])
    cv2.normalize(self.roi_hist, self.roi_hist, 0, 255, cv2.NORM_MINMAX)
    self.term_crit = (cv2.TERM_CRITERIA_EPS | cv2.TERM_CRITERIA_COUNT, 10, 1)
    print(self.term_crit)
    print('_______________________________________________________')
    print('_______________________________________________________')

  def timer_callback(self):

    self.ret, frame = self.cap.read()

    frame_hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

    frame_backproj = cv2.calcBackProject([frame_hsv], [0, 1], self.roi_hist, [0, 180, 0, 256], 1)

    ret, self.bbox = cv2.CamShift(frame_backproj, self.bbox, self.term_crit)

    pts = cv2.boxPoints(ret)
    pts = np.int0(pts)
    cv2.polylines(frame, [pts], True, (0, 255, 0), 2)
    
    area = cv2.minAreaRect(pts.astype(np.int))
    if self.ret == True:
      msg = String()
      msg.data = "'%s'-'%s'" % (area[0][0], area[0][1])
      self.publisher2_.publish(msg)
      self.publisher_.publish(self.br.cv2_to_imgmsg(frame))
    self.get_logger().info('Publishing video frame')

def main(args=None):
   
  rclpy.init(args=args)
   
  image_publisher = ImagePublisher()
   
  rclpy.spin(image_publisher)
  image_publisher.destroy_node()
  rclpy.shutdown()
   
if __name__ == '__main__':
  main()
import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from dynamixel_sdk import *
from .motor.servo_handler import servoLed

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('pan_tilt_node')
        self.subscription = self.create_subscription(
            String,
            'object_screen_position',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        servoLed(msg.data)

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
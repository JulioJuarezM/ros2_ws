import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from dynamixel_sdk import *

from .motor.servo_handler import servoLed

class MinimalSubscriber(Node):

    def __init__(self):
        print('Init function from...sss')
        super().__init__('servo_node')
        self.subscription = self.create_subscription(String,'object_screen_position',self.listener_callback,10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info(msg.data)
        servoLed(msg.data)


def main(args=None):
    rclpy.init(args=args)
    print('Init function from')
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
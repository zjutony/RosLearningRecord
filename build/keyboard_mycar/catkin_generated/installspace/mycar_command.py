#!/home/tony/anaconda3/envs python
import rospy
from geometry_msgs.msg import Twist
from std_msgs.msg import String

def publish_velocity(vel_x,vel_z):
    # rospy.init_node('velocity_publisher', anonymous=True)
    pub = rospy.Publisher('/cmd_vel', Twist, queue_size=1)
    # rate = rospy.Rate(10)  # 10hz
    # while not rospy.is_shutdown():
    vel_msg = Twist()
    vel_msg.linear.x = vel_x
    vel_msg.linear.y = 0
    vel_msg.linear.z = 0
    vel_msg.angular.x = 0
    vel_msg.angular.y = 0
    vel_msg.angular.z = vel_z
    pub.publish(vel_msg)
    # rate.sleep()

def doMsg(msg):
    if msg.data == 'w':
        command = "Go forward!"
        vel_x = 0.3
        vel_z = 0
    elif msg.data == "s":
        command = "Go back!"
        vel_x = -0.3
        vel_z = 0
    elif msg.data == "a":
        command = "Turn left!"
        vel_x = 0
        vel_z = 0.3
    elif msg.data == "d":
        command = "Turn right!"
        vel_x = 0
        vel_z = -0.3
    else:
        command = "Error Command !!"
        vel_x = 0
        vel_z = 0
    rospy.loginfo("Command is :%s",command)
    publish_velocity(vel_x,vel_z)


if __name__ == '__main__':
    #2.初始化 ROS 节点:命名(唯一)
    rospy.init_node("listener_keyboard")
    #3.实例化 订阅者 对象
    sub = rospy.Subscriber("keyboard_input",String,doMsg,queue_size=10)
    #4.处理订阅的消息(回调函数)
    #5.设置循环调用回调函数
    rospy.spin()


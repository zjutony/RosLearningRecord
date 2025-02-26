#!/home/tony/anaconda3/envs python
import rospy
from std_msgs.msg import String
import sys
import tty
import termios

def getch():
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    try:
        tty.setcbreak(fd)
        ch = sys.stdin.read(1)
    finally:
        termios.tcsetattr(fd, termios.TCSAFLUSH, old_settings)
    return ch

def keyboard_pub():
    # 初始化ROS节点
    rospy.init_node('keyboard_publisher', anonymous=True)
    # 创建一个发布者，发布到名为'keyboard_input'的话题上，消息类型为String
    pub = rospy.Publisher('keyboard_input', String, queue_size=1)
    # 设置循环频率
    rate = rospy.Rate(10)  # 10hz
    while not rospy.is_shutdown():
        try:
            # 读取键盘输入
            key = getch()
            # 根据按键发布不同的消息
            if key:
                msg = String()
                msg.data = key
                pub.publish(msg)
                print("Published:", msg.data)
            rate.sleep()
        except KeyboardInterrupt:
            print("KeyboardInterrupt")
            break

if __name__ == '__main__':
    try:
        keyboard_pub()
    except rospy.ROSInterruptException:
        pass
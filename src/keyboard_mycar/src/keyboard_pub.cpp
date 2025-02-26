#include <ros/ros.h>
#include <std_msgs/String.h>
#include <termios.h>
#include <unistd.h>
#include <iostream>

char getch() {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

int main(int argc, char **argv) {
    // ros::init(argc, argv, "keyboard_publisher");
    // keyboard_pub();
            //设置编码
    setlocale(LC_ALL,"");
    // 初始化ROS节点
    ros::init(argc, argv, "keyboard_publisher");
    ros::NodeHandle nh;

    // 创建一个发布者，发布到名为'keyboard_input'的话题上，消息类型为String
    ros::Publisher pub = nh.advertise<std_msgs::String>("keyboard_input", 1);

    // 设置循环频率
    ros::Rate rate(10);  // 10hz
    while (ros::ok()) {
        char key = getch();
        if (key) {
            std_msgs::String msg;
            msg.data = std::string(1, key);
            pub.publish(msg);
            ROS_INFO("Published: [%s]", msg.data.c_str());
        }
        rate.sleep();
    }
    return 0;
}
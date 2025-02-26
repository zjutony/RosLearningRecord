#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/String.h>

// 发布速度的函数
void publish_velocity(float vel_x, float vel_z) {
    // 创建一个发布者，发布到名为'/cmd_vel'的话题上，消息类型为Twist
    ros::Publisher pub = ros::NodeHandle().advertise<geometry_msgs::Twist>("/cmd_vel", 1);
    geometry_msgs::Twist vel_msg;
    vel_msg.linear.x = vel_x;
    vel_msg.linear.y = 0;
    vel_msg.linear.z = 0;
    vel_msg.angular.x = 0;
    vel_msg.angular.y = 0;
    vel_msg.angular.z = vel_z;
    pub.publish(vel_msg);
}

// 处理消息的回调函数
void doMsg(const std_msgs::String::ConstPtr& msg) {
    std::string command;
    float vel_x = 0;
    float vel_z = 0;
    if (msg->data == "w") {
        command = "Go forward!";
        vel_x = 0.3;
        vel_z = 0;
    } else if (msg->data == "s") {
        command = "Go back!";
        vel_x = -0.3;
        vel_z = 0;
    } else if (msg->data == "a") {
        command = "Turn left!";
        vel_x = 0;
        vel_z = 0.3;
    } else if (msg->data == "d") {
        command = "Turn right!";
        vel_x = 0;
        vel_z = -0.3;
    } else {
        command = "Error Command !!";
        vel_x = 0;
        vel_z = 0;
    }
    ROS_INFO("Command is :%s", command.c_str());
    publish_velocity(vel_x, vel_z);
}

int main(int argc, char **argv) {
    // 初始化ROS节点
    ros::init(argc, argv, "listener_keyboard");
    ros::NodeHandle nh;

    // 实例化订阅者对象
    ros::Subscriber sub = nh.subscribe("keyboard_input", 10, doMsg);

    // 设置循环调用回调函数
    ros::spin();

    return 0;
}
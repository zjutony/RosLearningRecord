;; Auto-generated. Do not edit!


(when (boundp 'topic_node::Per)
  (if (not (find-package "TOPIC_NODE"))
    (make-package "TOPIC_NODE"))
  (shadow 'Per (find-package "TOPIC_NODE")))
(unless (find-package "TOPIC_NODE::PER")
  (make-package "TOPIC_NODE::PER"))
(unless (find-package "TOPIC_NODE::PERREQUEST")
  (make-package "TOPIC_NODE::PERREQUEST"))
(unless (find-package "TOPIC_NODE::PERRESPONSE")
  (make-package "TOPIC_NODE::PERRESPONSE"))

(in-package "ROS")





(defclass topic_node::PerRequest
  :super ros::object
  :slots (_num1 _num2 ))

(defmethod topic_node::PerRequest
  (:init
   (&key
    ((:num1 __num1) 0)
    ((:num2 __num2) 0)
    )
   (send-super :init)
   (setq _num1 (round __num1))
   (setq _num2 (round __num2))
   self)
  (:num1
   (&optional __num1)
   (if __num1 (setq _num1 __num1)) _num1)
  (:num2
   (&optional __num2)
   (if __num2 (setq _num2 __num2)) _num2)
  (:serialization-length
   ()
   (+
    ;; int32 _num1
    4
    ;; int32 _num2
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _num1
       (write-long _num1 s)
     ;; int32 _num2
       (write-long _num2 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _num1
     (setq _num1 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _num2
     (setq _num2 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass topic_node::PerResponse
  :super ros::object
  :slots (_sum ))

(defmethod topic_node::PerResponse
  (:init
   (&key
    ((:sum __sum) 0)
    )
   (send-super :init)
   (setq _sum (round __sum))
   self)
  (:sum
   (&optional __sum)
   (if __sum (setq _sum __sum)) _sum)
  (:serialization-length
   ()
   (+
    ;; int32 _sum
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _sum
       (write-long _sum s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _sum
     (setq _sum (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass topic_node::Per
  :super ros::object
  :slots ())

(setf (get topic_node::Per :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get topic_node::Per :datatype-) "topic_node/Per")
(setf (get topic_node::Per :request) topic_node::PerRequest)
(setf (get topic_node::Per :response) topic_node::PerResponse)

(defmethod topic_node::PerRequest
  (:response () (instance topic_node::PerResponse :init)))

(setf (get topic_node::PerRequest :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get topic_node::PerRequest :datatype-) "topic_node/PerRequest")
(setf (get topic_node::PerRequest :definition-)
      "# 客户端请求时发送的两个数字
int32 num1
int32 num2
---
# 服务器响应发送的数据
int32 sum

")

(setf (get topic_node::PerResponse :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get topic_node::PerResponse :datatype-) "topic_node/PerResponse")
(setf (get topic_node::PerResponse :definition-)
      "# 客户端请求时发送的两个数字
int32 num1
int32 num2
---
# 服务器响应发送的数据
int32 sum

")



(provide :topic_node/Per "4781436a0c2affec8025955a6041e481")



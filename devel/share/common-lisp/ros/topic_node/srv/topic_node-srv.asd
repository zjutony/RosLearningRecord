
(cl:in-package :asdf)

(defsystem "topic_node-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Per" :depends-on ("_package_Per"))
    (:file "_package_Per" :depends-on ("_package"))
  ))
from pynput import keyboard

def on_press(key):
    try:
        # 将按键记录写入文本文件
        with open("key_log.txt", "a") as f:
            f.write(str(key.char))
    except AttributeError:
        print('特殊按键 {0} 被按下'.format(key))

def on_release(key):
    print('按键 {0} 被释放'.format(key))
    if key == keyboard.Key.esc:
        # 停止监听
        return False

# 创建一个键盘监听器
with keyboard.Listener(on_press=on_press, on_release=on_release) as listener:
    listener.join()
#include <iostream>
#include <Windows.h>

void simulateCtrlF1();

int main() {
    simulateCtrlF1();
    return 0;
}

void simulateCtrlF1() {
    // 定义INPUT结构体数组用于发送键盘事件
    INPUT inputs[4] = {};
    ZeroMemory(inputs, sizeof(inputs));

    // 设置键盘事件为KEYBDINPUT类型
    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = VK_CONTROL;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = VK_F1;

    // 设置释放按键事件
    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = VK_F1;
    inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = VK_CONTROL;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

    // 发送键盘事件到系统
    SendInput(4, inputs, sizeof(INPUT));
}


#include <iostream>
#include <Windows.h>

void simulateCtrlF1();

int main() {
    simulateCtrlF1();
    return 0;
}

void simulateCtrlF1() {
    // ����INPUT�ṹ���������ڷ��ͼ����¼�
    INPUT inputs[4] = {};
    ZeroMemory(inputs, sizeof(inputs));

    // ���ü����¼�ΪKEYBDINPUT����
    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = VK_CONTROL;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = VK_F1;

    // �����ͷŰ����¼�
    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = VK_F1;
    inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = VK_CONTROL;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

    // ���ͼ����¼���ϵͳ
    SendInput(4, inputs, sizeof(INPUT));
}


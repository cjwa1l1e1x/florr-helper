#include <bits/stdc++.h>
#include <windows.h>
#include <unistd.h>
void SendKeyStroke(char key,int wait)
{
    INPUT ip;
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = key;
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;
    ip.ki.wVk = key;
 
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
 	sleep(wait);
    ip.ki.dwFlags = 2;
    SendInput(1, &ip, sizeof(INPUT));
}
int main() {
	int a;
	while(1){
		a=GetKeyState(VK_RBUTTON);
		if(a<0)
			SendKeyStroke('1',0.1);
	}
    return 0;
}

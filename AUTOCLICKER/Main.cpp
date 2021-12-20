#include <iostream>
#include "Clicker.h"
#include <Windows.h>



int main() {

	std::cout << "Autoclicker" << std::endl;

	

	char k = 'Z';
	bool autoclicker = false;
	bool exit = false;
	
	while (exit == false) {

		if (GetAsyncKeyState('Z')) {
			autoclicker = true;

		}
		else if (GetAsyncKeyState('X')) {

			autoclicker = false;
		}
		else if (GetAsyncKeyState('Q')) {
			exit = true;
		}

		if (autoclicker == true) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			
			Sleep(0.1);
			
		}


		
	
	}

	
	

	return 0;
}
#include <iostream>
#include <windows.h>



int main() {

	std::cout << " z on x off q to quit " << std::endl;

	


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
			
			Sleep(0);
			
		}




	}

	return 0;
}
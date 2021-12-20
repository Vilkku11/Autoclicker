#include "Clicker.h"

// Undefining max function from Windows.h


void Clicker::Click()
{
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

    Sleep(clicks);
}

int Clicker::Calc() {

    sleep_time = 1000 / clicks;

}

void Clicker::Configure() {
     float click;
     int click1;
    system("CLS");
	std::cout << "Enter clicks per second: " << std::endl;
	std::cin >> click;
    
    // Check if user input correct
    click1 = click;
    while (!std::cin || click <= 0 || click - click1 != 0) {
        system("CLS");
        std::cout << "Enter clicks per second: " << std::endl;
        std::cin.clear();
        std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
        std::cin >> click;
    }
    Clicker::clicks = click;
    Clicker::Calc();
}
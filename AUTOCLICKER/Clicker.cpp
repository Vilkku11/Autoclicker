#include "Clicker.h"


void Clicker::Click(int& time_pushed_down, int& time_between)
{

}

int Clicker::Calc(int &time_pushed_down, int &clicks) {

	&time_pushed_down;

}

void Clicker::Configure() {
     float clicks;
     int clicks1;
    system("CLS");
	std::cout << "Enter clicks per second: " << std::endl;
	std::cin >> clicks;
    clicks1 = clicks;
    // Check if user input correct
    while (!std::cin || clicks <= 0 || clicks - clicks1 != 0) {
        system("CLS");
        std::cout << "Enter clicks per second: " << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> clicks;
    }
    
}
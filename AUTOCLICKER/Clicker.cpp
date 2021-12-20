#include "Clicker.h"




void Clicker::Click()
{
    autoclicker == false;
    while (exit == false) {
        

        if (GetAsyncKeyState(autoclicker_enable)) {
            
            autoclicker = true;
        }
        else if (GetAsyncKeyState(autoclicker_disable)) {
            
            autoclicker = false;
        }
        else if (GetAsyncKeyState(configure) && autoclicker == false) {
           
            
            Clicker::Configure();
        }
        else if (GetAsyncKeyState(speed) && autoclicker == false) {
            Clicker::Speed();
            
        }
        else if (GetAsyncKeyState(exiit)) {
            exit = true;
        }
     
        if (autoclicker == true) {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(clicks);
            
        }
        else {

        }
        
    }
}

void Clicker::Calc() {

    sleep_time = 1000 / clicks;

}

void Clicker::Speed() {
     float click;
     int click1;
    system("CLS");
    std::cin.clear();
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
    system("CLS");
    std::cout << "Autoclicker!" << std::endl;
    std::cout << " " << std::endl;
}
void Clicker::Configure() {

    std::cin.clear();
   // std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
    int answer;
    do {
        system("CLS");
        std::cout << "Configure tab:  Exit by pressing 6" << std::endl;
        std::cout << " " << std::endl;
        std::cout << "1 Start autoclicker is set to " << autoclicker_enable << std::endl;
        std::cout << "2 Stop autoclicker is set to " << autoclicker_disable << std::endl;
        std::cout << "3 Configure tab is set to " << configure << std::endl;
        std::cout << "4 Exit program is set to " << exiit << std::endl;
        std::cout << "5 Configure autoclicker speed is set to " << speed << std::endl;
        std::cout << " " << std::endl;
        std::cout << "Please select the number you want modify key for: " << std::endl;
        std::cin >> answer;

        switch (answer) {
        case 1:
            std::cout << "Please select key for autoclicker start: " << std::endl;
            std::cin >> autoclicker_enable;
            break;
        case 2:
            std::cout << "Please select key for autoclicker stop: " << std::endl;
            std::cin >> autoclicker_disable;
            break;
        case 3:
            std::cout << "Please select key for configure tab: " << std::endl;
            std::cin >> configure;
            break;
        case 4:
            std::cout << "Please select key for exit program: " << std::endl;
            std::cin >> exiit;
            break;
        case 5:
            std::cout << "Please select key for speed configuration: " << std::endl;
            std::cin >> speed;
            break;
        case 6:
            answer == 6;
            break;
        }
        
            
        std::cin.clear();
        std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
    } while (!std::cin || answer != 6);
        system("CLS");
        std::cout << "Autoclicker!" << std::endl;
}

void Clicker::Show_Click_Speed() {

    std::cout << "Clicks per second: " << clicks << std::endl;

}
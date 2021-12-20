#pragma once
#include <iostream>
#include <Windows.h>




class Clicker {

public:
	void Show_Click_Speed();
	void Click();
	void Calc();
	void Speed();
	void Configure();
private:
	
	float clicks;
	float sleep_time = 1000;

	bool autoclicker;
	bool exit = false;
	char autoclicker_enable = 'E';
	char autoclicker_disable = 'D';
	char configure = 'C';
	char speed = 'S';
	char exiit = 'Q';
	
};
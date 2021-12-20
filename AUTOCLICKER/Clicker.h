#pragma once



class Clicker {

public:
	void Click(int &time_pushed_down, int &time_between);
	int Calc(int &time_pushed_down, int &time_between, int &clicks);
	void Configure();
private:
	int time_pushed_down;
	int time_between;
	int clicks;
	
};
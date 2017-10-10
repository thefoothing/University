// Comp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>
#include <iostream>
struct timeType
{
	timeType() {
	
	};
	timeType(int hr, double min, int sec) {
		this->hr = hr;
		this->min = min;
		this->sec = sec;

	}
		int hr; 
		double min; 
		int sec; 
};

struct tourType
{
		 std::string cityName;
		 int distance;
		 timeType travelTime;
};


void printTourType(tourType tour) {
	std::cout << tour.cityName << ' ' << tour.distance << std::endl;
	std::cout << tour.travelTime.hr << ':' << tour.travelTime.min << ':' << tour.travelTime.sec << std::endl;
}

int main()
{
	tourType destination;
	destination.cityName = "Nottingham";
	destination.distance = 130;
	destination.travelTime = timeType(3,15,0);
	printTourType(destination);
	std::cin.get();
    return 0;
}


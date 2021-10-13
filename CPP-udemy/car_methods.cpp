//Car Methods
#include "car.h"
#include <iostream>

Car::Car(){
	std::cout << "In Constructor" << "\n";
    fuel=0;
	passengers=0;
    speed=0;
}

Car::~Car(){
	std::cout << "Car is Destroyed" << "\n";
}

void Car::FillFuel(float amount){
    fuel += amount;
	if (fuel>=100){
		fuel =100; //max
	}
}

void Car::Accelerate(){
    
	if (fuel>0){
		speed ++;
	    fuel =- 0.5f;
	}else{
        std::cout << "Out of Gas" << "\n";
	}
}

void Car::Brake(){
    speed = 0;
}

void Car::AddPassengers(int count){
    passengers +=count;
}

void Car::Dashboard(){
    std::cout << "Fuel: " << fuel << "\n";
	std::cout << "Speed: " << speed << "\n";
	std::cout << "Passengers: " << passengers << "\n";
}

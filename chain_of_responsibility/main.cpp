// main.cpp
// Theng Yang
// 5/2/2020
//
// Source file that contain a simple program to demostrate the chain of responsibility. 

#include"CargoShipping.hpp"
#include"Shipper.hpp"

#include<vector>
using std::vector;

int main() {

	vector<int> cargoBoxs{ 10, 20, 13, 50 , 30, 34, 23, 100, 1 };

	CarShipper car;
	TruckShipper truck;
	AirShipper plane;
	SeaShipper ship;

	car.addShipper(&truck);
	car.addShipper(&plane);
	car.addShipper(&ship);
	ship.setShipper(&car);
	
	for (auto box: cargoBoxs) {
		car.takeCargo(box);
	}

	return 0;
}
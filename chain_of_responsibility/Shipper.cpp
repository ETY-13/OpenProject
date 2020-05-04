// CargoShipping.hpp
// Theng Yang
// 5/2/2020
//
// Source file for (Hanlders) subclasses of a chain of responsility 
// demostration. Credit goes to sourcemaking.com for providing coding examples
// which this demostration is built upon. Reference: 
// https://sourcemaking.com/design_patterns/chain_of_responsibility

#include"CargoShipping.hpp"
#include"Shipper.hpp"

#include<iostream>
using std::cout;
using std::endl;

void CarShipper::takeCargo(int cargoWeight) const  {
	if (cargoWeight  <= 10) {
		cout << "Car Shipper takes Cargo with weight: " << cargoWeight << " and shipping it by car."<<endl;
	}
	else {
		CargoShipping::takeCargo(cargoWeight);
	}
}

void TruckShipper::takeCargo(int cargoWeight) const {
	if (cargoWeight > 10 && cargoWeight <= 20) {
		cout << "Truck Shipper takes Cargo with weight: " << cargoWeight << " and shipping it by truck."<<endl;
	}
	else {
		CargoShipping::takeCargo(cargoWeight);
	}
}

void AirShipper::takeCargo(int cargoWeight) const {
	if (cargoWeight> 20 &&  cargoWeight <= 60) {
		cout << "Air Shipper takes Cargo with weight: " << cargoWeight << " and shipping it by plane."<<endl;
	}
	else {
		CargoShipping::takeCargo(cargoWeight);
	}
}

void SeaShipper::takeCargo(int cargoWeight) const {
	if (cargoWeight > 60) {
		cout << "Sea Shipper takes Cargo with weight: " << cargoWeight << " and shipping it by ship."<<endl;
	}
}
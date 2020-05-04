// CargoShipping.cpp
// Theng Yang
// 5/2/2020
//
// Source file for the Base class of a chain of responsility 
// demostration. Credit goes to sourcemaking.com for providing coding examples
// which this demostration is built upon. Reference:
// https://sourcemaking.com/design_patterns/chain_of_responsibility

#include"CargoShipping.hpp"


CargoShipping::CargoShipping() {
	_ship_ = nullptr;
}

CargoShipping::~CargoShipping() = default;

void CargoShipping::setShipper(CargoShipping *ship) {
	_ship_ = ship;
}

void CargoShipping::addShipper(CargoShipping *ship) {
	if (_ship_) {
		_ship_->addShipper(ship);
	}
	else {
		_ship_ = ship;
	}
}

 void CargoShipping::takeCargo(int cargoWeight) const {
	_ship_->takeCargo(cargoWeight);
}
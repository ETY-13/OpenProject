// CargoShipping.hpp
// Theng Yang
// 5/2/2020
//
// Header file for the (Hanlders) subclasses of a chain of responsility 
// demostration. Credit goes to sourcemaking.com for providing coding examples
// which this demostration is built upon. Reference:
// https://sourcemaking.com/design_patterns/chain_of_responsibility

#ifndef SHIPPER_HPP
#define SHIPPER_HPP
#include"CargoShipping.hpp"

// Handlers are different cargo shippers that ship the cargo
// depending on the cargo weight. 

class CarShipper :public CargoShipping {
public:
	void takeCargo (int cargoWeight) const  override;
};

class TruckShipper :public CargoShipping {
public:
	 void takeCargo (int cargoWeight) const override;
};

class AirShipper :public CargoShipping {
public:
	void takeCargo (int cargoWeight) const override;
};

class SeaShipper :public CargoShipping {
public:
	 void takeCargo (int cargoWeight) const override;
};

#endif // !SHIPPER_HPP


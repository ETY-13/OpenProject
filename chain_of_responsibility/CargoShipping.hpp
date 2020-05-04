// CargoShipping.hpp
// Theng Yang
// 5/2/2020
//
// Header file for the Base class of a chain of responsibility 
// demonstration. Credit goes to sourcemaking.com for providing coding examples
// which this demonstration is built upon. Reference:
// https://sourcemaking.com/design_patterns/chain_of_responsibility

#ifndef CARGO_SHIPPING_HPP
#define CARGO_SHIPPING_HPP

class CargoShipping{
public:
	CargoShipping();
	~CargoShipping();
	virtual void setShipper(CargoShipping *ship) ;
	virtual void addShipper(CargoShipping *ship) ;
	virtual void takeCargo(int cargoWeight) const;
private:
	CargoShipping *_ship_;
};

#endif // !CARGO_SHIPPING_HPP


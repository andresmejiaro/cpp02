#include "Fixed.hpp"

Fixed::Fixed() : value(0){
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int numb) {
	//std::cout << "Int constructor called" << std::endl;
	this->value = numb << f_bits;
}

Fixed::Fixed(const float numb){
	int j = 0;
	int tmp = 1;

	//std::cout << "Float constructor called" << std::endl;
	while (j < this->f_bits){
		tmp *= 2;
		j++;
	}
	this->value = (int)roundf(numb * (float)tmp);
}

Fixed& Fixed::operator= (const Fixed &other){
	//std::cout << "Copy assignment constructor called" << std::endl;
	if (this!= &other){
		this->value = other.getRawBits();
	}
	return (*this);
}

bool Fixed::operator< (const Fixed &other) const{
	if (this->value < other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator> (const Fixed &other) const{
	if (this->value > other.getRawBits())
		return (true);
	return (false);
}
bool Fixed::operator<= (const Fixed &other) const{
	if (this->value <= other.getRawBits())
		return (true);
	return (false);
}
bool Fixed::operator>= (const Fixed &other) const{
	if (this->value >= other.getRawBits())
		return (true);
	return (false);
}
bool Fixed::operator!= (const Fixed &other) const{
	if (this->value != other.getRawBits())
		return (true);
	return (false);
}
bool Fixed::operator== (const Fixed &other) const{
	if (this->value == other.getRawBits())
		return (true);
	return (false);
}

Fixed 	Fixed::operator* (const Fixed &other) const{
	Fixed to_return;
	long result;
	
	to_return.setRawBits((this->value * other.getRawBits()) >> (this->f_bits));
	return (to_return);
}

Fixed 	Fixed::operator+ (const Fixed &other) const{
	Fixed to_return;

	to_return.setRawBits(this->value + other.getRawBits());
	return (to_return);
}

Fixed 	Fixed::operator- (const Fixed &other) const{
	Fixed to_return;

	to_return.setRawBits(this->value - other.getRawBits());
	return (to_return);
}

Fixed 	Fixed::operator/ (const Fixed &other) const{
	Fixed to_return;

	if (other.getRawBits() != 0)
		to_return.setRawBits(this->value / other.getRawBits());
	else 
		throw std::invalid_argument("Division by zero");
	return (to_return);
}

Fixed	&Fixed::operator++(){
		this->value++;
		return *this;
}

Fixed	Fixed::operator++(int){
		Fixed original(*this);
		this->value++;
		return original;
}

Fixed &Fixed::min(Fixed &first, Fixed &other){
	if (first < other)
		return (first);
	return (other);
	
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &other){
	if (first < other)
		return (first);
	return (other);	
}

Fixed &Fixed::max(Fixed &first, Fixed &other){
	if (first > other)
		return (first);
	return (other);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &other){
	if (first > other)
		return (first);
	return (other);
}

int Fixed::getRawBits(void) const{
	return (this->value);
}

void Fixed::setRawBits(int const raw){
	this->value = raw;
}

int Fixed::toInt(void) const{
	int to_return;

	to_return = (this->value) >> this->f_bits;
	return (to_return);
}

float Fixed::toFloat(void) const{
	int j = 0;
	int tmp = 1;
	float to_return;

	while (j < this->f_bits){
		tmp *= 2;
		j++;
	}
	to_return = ((float)this->value) / tmp;
	return (to_return);
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj){
	os << obj.toFloat();
	return (os);
}

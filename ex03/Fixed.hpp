
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
private:
	static int const	f_bits = 8;
	int					value;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	Fixed(const int numb);
	Fixed(const float numb);
	float		toFloat(void) const;
	int			toInt(void) const;
	Fixed		&operator= (const Fixed &other);
	bool		operator< (const Fixed &other) const; 
	bool		operator> (const Fixed &other) const; 
	bool		operator<= (const Fixed &other) const; 
	bool		operator>= (const Fixed &other) const; 
	bool		operator!= (const Fixed &other) const; 
	bool		operator== (const Fixed &other) const; 
	Fixed 		operator* (const Fixed &other) const;
	Fixed 		operator/ (const Fixed &other) const;
	Fixed 		operator+ (const Fixed &other) const;
	Fixed 		operator- (const Fixed &other) const;
	Fixed		&operator++();
	Fixed		operator++(int);
	static Fixed		&min(Fixed &first, Fixed &other);
	static const Fixed	&min(const Fixed &first, const Fixed &other);
	static Fixed		&max(Fixed &first, Fixed &other);
	static const Fixed	&max(const Fixed &first, const Fixed &other);
	int			getRawBits(void) const;
	void		setRawBits( int const raw);
};


std::ostream& operator<<(std::ostream &os, const Fixed &obj);
#endif
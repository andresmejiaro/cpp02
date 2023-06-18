
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
private:
	static int const	f_bits = 8;
	int					value;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	Fixed &operator= (const Fixed &other);
	int getRawBits(void) const;
	void setRawBits( int const raw);

};

#endif
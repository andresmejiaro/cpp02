/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:05:40 by amejia            #+#    #+#             */
/*   Updated: 2023/06/22 16:05:49 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	float toFloat(void) const;
	int toInt(void) const;
	Fixed &operator= (const Fixed &other);
	int getRawBits(void) const;
	void setRawBits( int const raw);
};

std::ostream& operator<<(std::ostream &os, const Fixed &obj);
#endif

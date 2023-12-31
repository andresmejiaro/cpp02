/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:04:22 by amejia            #+#    #+#             */
/*   Updated: 2023/06/22 16:04:30 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
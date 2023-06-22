/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:07:30 by amejia            #+#    #+#             */
/*   Updated: 2023/06/22 18:19:15 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point{
private:
	Fixed const	x;
	Fixed const y;
public:
	Point();
	~Point();
	Point(float x, float y);
	Point(const Point &other);
	
	Point	&rotate90(void) const;
	Fixed	getX();
	Fixed	getY();
	
	Point	&operator= (const Point &other);
	Point	operator+(const Point &other) const;
	Point	operator-(const Point &other) const;
	Fixed	operator*(const Point &other) const;

	static bool	bsp(Point const a, Point const b, Point const c, 
		Point const point);
};

#endif
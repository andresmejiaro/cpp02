/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 18:11:24 by amejia            #+#    #+#             */
/*   Updated: 2023/06/22 18:23:52 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){	
}

Point::~Point(){
}

Point::Point(float x, float y): x(x),y(y){
}

Point::Point(const Point &other): x(other.getX()), y(other.getY()){	
}

Fixed Point::getX(){
	return (this->x);
}

Fixed Point::getY(){
	return (this->y);
}

Fixed &Point::rotate90(void) const{
	
}
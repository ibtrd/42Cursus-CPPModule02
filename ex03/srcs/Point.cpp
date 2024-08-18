/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 04:44:44 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/18 03:07:52 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

/* CONSTRUCTORS ************************************************************* */

Point::Point(void) : _x(0), _y(0)
{
	// std::cout << "Point Default constructor called" << std::endl;
}

Point::Point(const Point &other) : _x(other.getX()), _y(other.getY())
{
	// std::cout << "Point Copy constructor called" << std::endl;
	*this = other;
}

Point::Point(const float init_x, const float init_y) : _x(init_x), _y(init_y)
{
	// std::cout << "Point Float constructor called" << std::endl;
}

Point::Point(const Fixed &init_x, const Fixed &init_y) : _x(init_x), _y(init_y)
{	
	// std::cout << "Point Fixed constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

Point::~Point(void)
{
	// std::cout << "Point destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

Point	&Point::operator=(const Point &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

/* ARITHMETIC OPERATOR ****************************************************** */

Fixed	Point::operator*(const Point &other)
{
	Fixed result(this->getX() * other.getX() + this->getY() * other.getY());

	return (result);
}

/* ************************************************************************** */

const Fixed	&Point::getX(void) const
{
	return (this->_x);
}

const Fixed	&Point::getY(void) const
{
	return (this->_y);
}

/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &os, const Point &point)
{
	os << "(x:" << point.getX() << ",y:" << point.getY() << ")";
	return (os);
}

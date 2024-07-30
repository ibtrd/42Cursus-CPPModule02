/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:16:07 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/30 04:13:19 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

/* CONSTRUCTORS ************************************************************* */

Fixed::Fixed(void)
: _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
: _value(n << _fractionalBits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n)
: _value(roundf(n * (1 << _fractionalBits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

/* DESTRUCTOR *************************************************************** */

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

/* OPERATOR OVERLOADS ******************************************************* */

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->setRawBits(other.getRawBits());
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &ref)
{
	os << ref.toFloat();
	return (os);	
}

/* COMPARISON OPERATORS ***************************************************** */

bool Fixed::operator>(const Fixed &other) const
{
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->getRawBits() != other.getRawBits();
}

/* ARITHMETIC OPERATORS ***************************************************** */

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed add;

	add.setRawBits(this->getRawBits() + other.getRawBits());
	return (add);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed sub;

	sub.setRawBits(this->getRawBits() - other.getRawBits());
	return (sub);
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed mult;

	mult.setRawBits((long long)(this->getRawBits() * other.getRawBits() / (1 << _fractionalBits)));
	return (mult);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed div;

	div.setRawBits((long long)(this->getRawBits() * (1 << _fractionalBits) / other.getRawBits()));
	return (div);
}

/* PRE/POST-INCREMENT/DECREMENT OPERATORS *********************************** */

Fixed	&Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed pre(*this);

	++(*this);
	return (pre);
}

Fixed	Fixed::operator--(int)
{
	Fixed pre(*this);

	--(*this);
	return (pre);
}

/* MIN-MAX STATIC FUNCTIONS ************************************************* */

Fixed 		&Fixed::min(Fixed &a, Fixed &b)
{
	return (a > b ? b : a);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a > b ? b : a);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	return (a < b ? b : a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a < b ? b : a);
}

/* ************************************************************************** */

int		Fixed::getRawBits(void) const
{ 
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (1 << _fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (this->getRawBits() >> _fractionalBits);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:16:07 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/29 18:02:07 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

/* ORTHODOX CANONICAL FORM ************************************************** */

Fixed::Fixed(void)
: _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &os, const Fixed &ref)
{
	os << ref.toFloat();
	return (os);	
}

Fixed::Fixed(const int n)
: _value(n << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n)
: _value(roundf(n * (1 << _fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

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
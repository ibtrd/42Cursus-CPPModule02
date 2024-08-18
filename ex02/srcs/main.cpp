/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:15:32 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/17 23:54:38 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int main(void)
{
	Fixed a(455.54f);
	Fixed b(3.56f);

	std::cout << (a < b) << " = " << a << " < " << b << std::endl;
	std::cout << (b < a) << " = " << b << " < " << a << std::endl;
	std::cout << (a < a) << " = " << a << " < " << a << std::endl;
	std::cout << (a <= a) << " = " << a << " <= " << a << std::endl << std::endl;
	
	std::cout << (a > b) << " = " << a << " > " << b << std::endl;
	std::cout << (b > a) << " = " << b << " > " << a << std::endl;
	std::cout << (a > a) << " = " << a << " > " << a << std::endl;
	std::cout << (a >= a) << " = " << a << " >= " << a << std::endl << std::endl;

	std::cout << (a == b) << " = " << a << " == " << b << std::endl;
	std::cout << (a != b) << " = " << a << " != " << b << std::endl;
	std::cout << (a == a) << " = " << a << " == " << a << std::endl;
	std::cout << (a != a) << " = " << a << " != " << a << std::endl << std::endl;

	std::cout << a + b << " = " << a << " + " << b << std::endl;
	std::cout << a + 0 << " = " << a << " + " << 0 << std::endl;
	std::cout << b + b << " = " << b << " + " << b << std::endl << std::endl;

	std::cout << a - b << " = " << a << " - " << b << std::endl;
	std::cout << a - 0 << " = " << a << " - " << 0 << std::endl;
	std::cout << b - b << " = " << b << " - " << b << std::endl << std::endl;

	std::cout << a * b << " = " << a << " * " << b << std::endl;
	std::cout << a * 0 << " = " << a << " * " << 0 << std::endl;
	std::cout << b * b << " = " << b << " * " << b << std::endl << std::endl;

	std::cout << a / b << " = " << a << " / " << b << std::endl;
	std::cout << a / 1 << " = " << a << " / " << 1 << std::endl;
	std::cout << b / b << " = " << b << " / " << b << std::endl << std::endl;

	std::cout << "For " << a << " and " << b << ":" <<std::endl;
	std::cout << "min = " << Fixed::min(a, b) << std::endl;
	std::cout << "min = " << Fixed::max(a, b) << std::endl;

	{
		const Fixed	d(154.654f);
		const Fixed e(544.3484f);

		std::cout << "For " << d << " and " << e << ":" <<std::endl;
		std::cout << "min = " << Fixed::min(d, e) << std::endl;
		std::cout << "max = " << Fixed::max(d, e) << std::endl << std::endl;
	}

	std::cout << "SUBJECT TESTS:\n" << std::endl;
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}
	return (0);
}

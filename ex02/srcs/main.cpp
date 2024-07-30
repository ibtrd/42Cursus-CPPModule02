/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:15:32 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/30 04:11:56 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int main(void)
{
	Fixed a(2.54f);
	Fixed b(54.56f);

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

	std::cout << "min = " << Fixed::min(12.54f, 956.5f) << std::endl;
	std::cout << "min = " << Fixed::max(12.54f, 956.5f) << std::endl;

	{
		const Fixed	d(12.54f);
		const Fixed e(956.5f);

		std::cout << "min = " << Fixed::min(d, e) << std::endl;
		std::cout << "min = " << Fixed::max(d, e) << std::endl;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:15:32 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/25 19:41:35 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int main(void)
{
	std::cout << "SUBJECT TESTS\n" << std::endl;
	{
		Fixed a;
		Fixed b( a );
		Fixed c;

		c = b;
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}

	std::cout << std::endl << "PERSONAL TESTS\n" << std::endl;
	{
		Fixed a;

		std::cout << a.getRawBits() << std::endl;
		a.setRawBits(42);
		std::cout << a.getRawBits() << std::endl;

		Fixed &ref = a;

		a = ref;
		std::cout << a.getRawBits() << std::endl;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:15:32 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/31 23:56:19 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

bool bsp(Point const &a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(3.5f, 4.1f);
	Point b(5.6f,  1.2f);
	Point c(7.3f, 5.8f);
	Point d(3.5f, 4.1f);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl << std::endl;

	std::cout << bsp(a, b, c ,d);

	return (0);
}

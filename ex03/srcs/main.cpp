/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:15:32 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/18 22:09:12 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int    main()
{
	//https://www.geogebra.org/calculator/qjucvqda

	const Point A(-2, 2);
	const Point B(5, 3);
	const Point C(2, 10);

	const Point D(1.6933f,3.57468f); 	// IN
	const Point E(4.8f, 3.2f); 			// IN
	const Point F(4.2f, 2.8f); 			// OUT
	const Point G(-1.96314f, 2.03688f);	// CLOSE IN
	const Point H(-1.99916f, 2.02294f);	// CLOSE OUT
	const Point I(-2, 2);				// OUT
	const Point J(0, 2.2857143f);		// OUT

	std::cout << bsp(A, B, C, D) << std::endl;
	std::cout << bsp(A, B, C, E) << std::endl;
	std::cout << bsp(A, B, C, F) << std::endl;
	std::cout << bsp(A, B, C, G) << std::endl;
	std::cout << bsp(A, B, C, H) << std::endl;
	std::cout << bsp(A, B, C, I) << std::endl;
	std::cout << bsp(A, B, C, J) << std::endl;
	std::cout << bsp(A, A, A, A) << std::endl;
	return (0);
}

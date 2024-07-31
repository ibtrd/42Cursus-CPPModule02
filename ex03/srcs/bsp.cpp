/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:12:03 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/31 23:53:56 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

Fixed	crossProduct(const Point &p1, const Point &p2)
{
	return ((p1.getX() * p2.getY()) - (p1.getY() * p2.getX()));
}

bool bsp( Point const &a, Point const b, Point const c, Point const point)
{
	Point	v0(b.getX() - a.getX(), b.getY() - a.getY());
	Point	v1(c.getX() - b.getX(), c.getY() - b.getY());
	Point	v2(a.getX() - c.getX(), a.getY() - c.getY());

	Point	pa(point.getX() - a.getX(), point.getY() - a.getY());
	Point	pb(point.getX() - b.getX(), point.getY() - b.getY());
	Point	pc(point.getX() - c.getX(), point.getY() - c.getY());

	Fixed	cross0(crossProduct(v0, pa));
	Fixed	cross1(crossProduct(v1, pb));
	Fixed	cross2(crossProduct(v2, pc));

	return (cross1 >= 0 && cross2 >= 0 && cross2 >= 0);
}

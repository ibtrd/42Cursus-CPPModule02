/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:12:03 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/18 22:09:09 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

Fixed	getSide(const Point &a, const Point &b, const Point &p)
{
	Fixed cross1((a.getX() - p.getX()) * (b.getY() - p.getY()));
	Fixed cross2((a.getY() - p.getY()) * (b.getX() - p.getX()));

	return (cross1 - cross2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed s1(getSide(a, b, point));
	Fixed s2(getSide(b, c, point));
	Fixed s3(getSide(c, a, point));

	return ((s1 > 0 && s2 > 0 && s3 > 0) || (s1 < 0 && s2 < 0 && s3 < 0));
}


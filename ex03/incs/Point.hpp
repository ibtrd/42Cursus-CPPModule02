/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 04:44:48 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/30 08:40:32 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Point_HPP
# define Point_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point(void);
		Point(const Point &);
		Point(const float, const float);
		Point(const Fixed &, const Fixed &);

		~Point(void);

		Point	&operator=(const Point &);
		Fixed	operator*(const Point &);

		const Fixed &getX(void) const;
		const Fixed &getY(void) const;
};

std::ostream	&operator<<(std::ostream &, const Point &);

#endif /* ******************************************************************* */

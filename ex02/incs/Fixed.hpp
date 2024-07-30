/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:16:09 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/30 04:12:27 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &);

		~Fixed(void);

		Fixed	&operator=(const Fixed &);

		int		getRawBits(void) const;
		void	setRawBits(int const);

		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed &) const;
		bool	operator<(const Fixed &) const;
		bool	operator>=(const Fixed &) const;
		bool	operator<=(const Fixed &) const;
		bool	operator==(const Fixed &) const;
		bool	operator!=(const Fixed &) const;

		Fixed	operator+(const Fixed &) const;
		Fixed	operator-(const Fixed &) const;
		Fixed	operator*(const Fixed &) const;
		Fixed	operator/(const Fixed &) const;

		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		static 			Fixed	&min(Fixed &, Fixed &);
		static const	Fixed	&min(const Fixed &, const Fixed &);
		static			Fixed	&max(Fixed &, Fixed &);
		static const	Fixed	&max(const Fixed &, const Fixed &);

	private:
		int					_value;
		static const int	_fractionalBits;
};

std::ostream	&operator<<(std::ostream &, const Fixed &);

#endif /* FIXED_HPP ********************************************************* */
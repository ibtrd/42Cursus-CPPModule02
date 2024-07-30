/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:16:09 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/30 01:15:53 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &);
		~Fixed(void);
		Fixed	&operator=(const Fixed &);

		Fixed(const int);
		Fixed(const float);

		int		getRawBits(void) const;
		void	setRawBits(int const);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_value;
		static const int	_fractionalBits;
};

std::ostream	&operator<<(std::ostream &, const Fixed &);

#endif /* FIXED_HPP ********************************************************* */
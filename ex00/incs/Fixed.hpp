/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:16:09 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/29 03:38:53 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &);
		~Fixed(void);
		Fixed&	operator=(const Fixed &);

		int		getRawBits(void) const;
		void	setRawBits(int const);

	private:
		int					_value;
		static const int	_fractionalBits;
};

#endif /* FIXED_HPP ********************************************************* */
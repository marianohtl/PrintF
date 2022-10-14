/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:25:28 by tmariano          #+#    #+#             */
/*   Updated: 2022/05/10 00:59:10 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_get_digit_fd(unsigned int numerator)
{
	int	digit;

	digit = 1;
	while (numerator > 9)
	{
		numerator = numerator / 10;
		digit++;
	}
	return (digit);
}

static void	ft_make_char_number_fd(unsigned int n, char *number, int digit)
{
	number[digit] = '\0';
	digit--;
	while (digit >= 0)
	{
		number[digit] = n % 10 + '0';
		n = n / 10;
		digit--;
	}
}

int	ft_putunbr_fd(unsigned int n, int fd)
{
	char	number[11];
	int		digit;

	digit = ft_get_digit_fd(n);
	ft_make_char_number_fd(n, number, digit);
	return (ft_putstr_fd(number, fd));
}

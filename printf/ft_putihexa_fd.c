/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putihexa_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:25:28 by tmariano          #+#    #+#             */
/*   Updated: 2022/05/10 01:10:21 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_get_digit_fd(unsigned int numerator)
{
	int	digit;

	digit = 1;
	while (numerator > 15)
	{
		numerator = numerator / 16;
		digit++;
	}
	return (digit);
}

static void	ft_make_char_number_fd(unsigned int n, char *number, int digit, \
	int islower)
{
	char	*base;

	number[digit] = '\0';
	digit--;
	if (islower == 0)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	while (digit >= 0)
	{
		number[digit] = base[n % 16];
		n = n / 16;
		digit--;
	}
}

int	ft_putihexa_fd(unsigned int n, int fd, int islower)
{
	char	number[10];
	int		digit;

	digit = ft_get_digit_fd(n);
	ft_make_char_number_fd(n, number, digit, islower);
	return (ft_putstr_fd(number, fd));
}

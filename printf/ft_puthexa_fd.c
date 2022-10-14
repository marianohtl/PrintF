/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:25:28 by tmariano          #+#    #+#             */
/*   Updated: 2022/05/10 01:09:16 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_get_digit_fd(size_t numerator)
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

static void	ft_make_char_number_fd(size_t n, char *number, int digit)
{
	const char	*base = "0123456789abcdef";

	number[digit] = '\0';
	digit--;
	while (digit >= 0)
	{
		number[digit] = base[n % 16];
		n = n / 16;
		digit--;
	}
}

int	ft_puthexa_fd(void *n, int fd)
{
	char	number[17];
	int		digit;

	if (n == 0)
		return (ft_putstr_fd("(nil)", fd));
	write(fd, "0x", 2);
	digit = ft_get_digit_fd((size_t) n);
	ft_make_char_number_fd((size_t) n, number, digit);
	return (ft_putstr_fd(number, fd) + 2);
}

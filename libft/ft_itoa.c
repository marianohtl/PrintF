/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:20:32 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/06 05:01:26 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_get_digit(int numerator)
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

static void	ft_make_char_number(int n, char *number, int digit, char signal)
{
	number[digit] = '\0';
	digit--;
	while (digit >= 0)
	{
		number[digit] = n % 10 + '0';
		n = n / 10;
		digit--;
	}
	if (signal == 1)
		number[digit + 1] = '-';
}

char	*ft_itoa(int n)
{
	char	*number;
	char	signal;
	int		digit;

	signal = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n *= -1;
		signal = 1;
	}
	digit = ft_get_digit(n) + signal;
	number = malloc((digit + 1) * sizeof(*number));
	if (number == NULL)
		return (number);
	ft_make_char_number(n, number, digit, signal);
	return (number);
}

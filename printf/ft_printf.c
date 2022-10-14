/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:25:08 by tmariano          #+#    #+#             */
/*   Updated: 2022/05/11 00:10:34 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	conversion(va_list ap, const char *format)
{
	if (*format == 'c')
		return (ft_putchar_fd((char) va_arg(ap, int), STDOUT_FILENO));
	if (*format == 's')
		return (ft_putstr_fd(va_arg(ap, char *), STDOUT_FILENO));
	if (*format == 'p')
		return (ft_puthexa_fd(va_arg(ap, void *), STDOUT_FILENO));
	if (*format == 'd')
		return (ft_putnbr_fd(va_arg(ap, int), STDOUT_FILENO));
	if (*format == 'i')
		return (ft_putnbr_fd(va_arg(ap, int), STDOUT_FILENO));
	if (*format == 'u')
		return (ft_putunbr_fd(va_arg(ap, int), STDOUT_FILENO));
	if (*format == 'x')
		return (ft_putihexa_fd(va_arg(ap, int), STDOUT_FILENO, 1));
	if (*format == 'X')
		return (ft_putihexa_fd(va_arg(ap, int), STDOUT_FILENO, 0));
	if (*format == '%')
		return (ft_putchar_fd('%', STDOUT_FILENO));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		sum;

	sum = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			sum += conversion(ap, format);
		}
		else
		{
			ft_putchar_fd(*format, STDOUT_FILENO);
			sum++;
		}
		format++;
	}
	va_end(ap);
	return (sum);
}

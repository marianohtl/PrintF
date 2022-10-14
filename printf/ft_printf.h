/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:25:28 by tmariano          #+#    #+#             */
/*   Updated: 2022/05/10 23:20:53 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<unistd.h>
# include<stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putihexa_fd(unsigned int n, int fd, int islower);
int	ft_puthexa_fd(void *n, int fd);
int	ft_putunbr_fd(unsigned int n, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);

#endif

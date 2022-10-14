/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:25:34 by tmariano          #+#    #+#             */
/*   Updated: 2022/05/10 00:44:56 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int len;

	if (s == NULL)
	{
		write (fd, "(null)", 6);
		return (6);
	}
	len = (int) ft_strlen(s);
	write (fd, s, len);
	return (len);
}

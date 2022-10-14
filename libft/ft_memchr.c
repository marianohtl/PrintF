/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:24:08 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/05 01:26:06 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	index;
	const char		*converted;

	index = 0;
	converted = s;
	while (index < n)
	{
		if (converted[index] == (char)c)
			return ((void *) &converted[index]);
		index++;
	}
	return (NULL);
}

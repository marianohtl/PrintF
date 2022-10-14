/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:24:45 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/05 01:21:00 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*str_dest;
	const unsigned char	*str_src;

	str_dest = dest;
	str_src = src;
	if (src < dest)
	{
		index = n;
		while (index > 0)
		{
			str_dest[index - 1] = str_src[index - 1];
			index--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

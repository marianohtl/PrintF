/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:24:21 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/05 01:29:33 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				index;
	const unsigned char	*converted_s1;
	const unsigned char	*converted_s2;

	converted_s1 = s1;
	converted_s2 = s2;
	index = 0;
	while (index < n)
	{
		if (converted_s1[index] != converted_s2[index])
			return ((int)(converted_s1[index] - converted_s2[index]));
		index++;
	}
	return (0);
}

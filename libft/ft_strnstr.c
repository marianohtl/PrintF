/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:28:02 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/05 01:49:44 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	*ft_return_special(const char *big, const char *little)
{
	if (ft_strlen(little) == 0)
		return ((char *) big);
	return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	i_big;
	size_t	i_little;

	index = 0;
	i_big = 0;
	i_little = 0;
	while (index < len && big[index] != '\0')
	{
		if (little[i_little] == '\0')
			return ((char *)&big[index]);
		if (big[i_big] == little[i_little] && i_big < len)
		{
			i_little++;
			i_big++;
		}
		else
		{
			index++;
			i_big = index;
			i_little = 0;
		}
	}
	return (ft_return_special(big, little));
}

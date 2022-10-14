/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:28:27 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/06 04:40:48 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	size;
	size_t	diff;
	size_t	memo;

	size = ft_strlen(s);
	diff = size - start;
	if (size < start)
		diff = 0;
	if (diff >= len)
		memo = len;
	else
		memo = diff;
	substring = malloc((memo + 1) * sizeof(*substring));
	if (substring == NULL)
		return (substring);
	if (size < start)
	{
		substring[0] = '\0';
		return (substring);
	}
	ft_strlcpy(substring, &s[start], memo + 1);
	return (substring);
}

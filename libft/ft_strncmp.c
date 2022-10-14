/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:27:54 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/05 01:25:37 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_char_diff(const char *s1, const char *s2, size_t index)
{
	return ((int)((unsigned char)s1[index] - (unsigned char)s2[index]));
}

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	index;

	if (size == 0)
		return (0);
	index = 0;
	while (s1[index] == s2[index] && index < size
		&& s1[index] != '\0' && s2[index] != '\0')
		index++;
	if (index == size && index != 0)
		return (ft_char_diff(s1, s2, index - 1));
	return (ft_char_diff(s1, s2, index));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:28:19 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/05 00:52:14 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_str_start(char const *s1, char const *set)
{
	int		index;
	char	*equal;

	index = 0;
	equal = ft_strchr(set, s1[index]);
	while (equal != NULL && s1[index])
	{
		index++;
		equal = ft_strchr(set, s1[index]);
	}
	return (index);
}

static int	ft_str_end(char const *s1, char const *set, int start)
{
	int		index;
	char	*equal;

	index = ft_strlen(s1) - 1;
	equal = ft_strchr(set, s1[index]);
	while (equal != NULL && index >= start)
	{
		index--;
		equal = ft_strchr(set, s1[index]);
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		start;
	int		end;
	int		size_trim;

	start = ft_str_start(s1, set);
	end = ft_str_end(s1, set, start);
	size_trim = end - start + 2;
	str_trim = malloc(size_trim * sizeof(*str_trim));
	if (str_trim == NULL)
		return (str_trim);
	ft_strlcpy(str_trim, &s1[start], size_trim);
	return (str_trim);
}

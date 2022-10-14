/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <tmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:28:10 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/02 19:28:13 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *string, int c)
{
	unsigned int	length;
	char			convert_c;

	length = ft_strlen(string);
	convert_c = (char) c;
	while (length > 0)
	{
		if (string[length] == convert_c)
			return ((char *)&string[length]);
		length--;
	}
	if (string[length] == convert_c)
		return ((char *)&string[length]);
	return (NULL);
}

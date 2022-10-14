/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <tmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:26:54 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/02 20:08:46 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	int		all_size;

	all_size = ft_strlen(s1);
	all_size += ft_strlen(s2);
	concat = malloc((all_size + 1) * sizeof(*concat));
	if (concat == NULL)
		return (concat);
	ft_strlcpy(concat, s1, all_size + 1);
	ft_strlcat(concat, s2, all_size + 1);
	return (concat);
}

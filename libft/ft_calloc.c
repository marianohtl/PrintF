/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:16:14 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/06 05:09:45 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			length;
	void			*result;

	length = nmemb * size;
	result = malloc(length);
	if (result == NULL)
		return (result);
	ft_bzero(result, length);
	return (result);
}

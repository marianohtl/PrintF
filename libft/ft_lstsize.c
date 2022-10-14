/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <tmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:23:50 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/02 19:23:54 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		length;
	t_list	*aux;

	if (lst == NULL)
		return (0);
	length = 1;
	aux = lst;
	while (aux->next != NULL)
	{
		aux = aux->next;
		length++;
	}
	return (length);
}

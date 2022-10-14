/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <tmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:22:24 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/02 20:10:27 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	t_list	*element;
	t_list	*element_clean;

	element = *lst;
	while (element != NULL)
	{
		element_clean = element;
		element = element->next;
		ft_lstdelone(element_clean, del);
	}
	*lst = NULL;
}

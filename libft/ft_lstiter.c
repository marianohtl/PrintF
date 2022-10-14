/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <tmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:22:53 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/02 19:22:58 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	t_list	*next_item;

	next_item = lst;
	while (next_item != NULL)
	{
		f(next_item->content);
		next_item = next_item->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <tmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:23:10 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/02 19:23:30 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *list)
{
	t_list	*lstlast;

	lstlast = list;
	if (list == NULL)
		return (NULL);
	while (lstlast->next != NULL)
	{
		lstlast = lstlast->next;
	}
	return (lstlast);
}

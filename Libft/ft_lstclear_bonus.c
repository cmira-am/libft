/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:18:39 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/08 12:00:28 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*aux;
	size_t	auxlst;

	auxlst = ((aux = *lst) == 0);
	if (auxlst)
		return ;
	while (aux)
	{
		tmp = aux->next;
		del(aux->content);
		free(aux);
		aux = tmp;
	}
	*lst = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:31:55 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/09 13:44:48 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res1;
	t_list	*first;

	if (lst == 0)
		return (NULL);
	first = malloc(sizeof(t_list));
	if (first == 0)
		return (NULL);
	res1 = first;
	res1->content = f(lst->content);
	while (lst->next)
	{
		lst = lst->next;
		res1->next = malloc(sizeof(t_list));
		if (!res1->next)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		res1->next->content = f(lst->content);
		res1 = res1->next;
	}
	res1->next = NULL;
	return (first);
}

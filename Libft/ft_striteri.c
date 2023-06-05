/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:54:24 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/03 11:57:34 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

	if (s == 0 || f == 0)
		return ;
	x = 0;
	while (s[x])
	{
		f(x, &s[x]);
		x++;
	}
}

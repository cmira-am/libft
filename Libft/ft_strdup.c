/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:05:49 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/03 11:33:47 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		n;
	char	*cpy;

	cpy = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (cpy == 0)
		return (0);
	n = 0;
	while (s[n] != 0)
	{
		cpy[n] = s[n];
		n++;
	}
	cpy[n] = 0;
	return (cpy);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:51:32 by cmira-am          #+#    #+#             */
/*   Updated: 2023/04/25 09:17:02 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	size_t	j;

	x = 0;
	if (*s2 == 0)
		return ((char *)s1);
	while (s1[x] && x < n)
	{
		j = 0;
		while (s1[x + j] == s2[j] && x + j < n)
		{
			if (s2[++j] == 0)
				return ((char *)&s1[x]);
		}
		x++;
	}
	return (0);
}

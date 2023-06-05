/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 07:37:54 by cmira-am          #+#    #+#             */
/*   Updated: 2023/04/25 09:17:20 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c;

	c = 0;
	if (dest == 0 && src == 0)
		return (0);
	while (c < n)
	{
		((unsigned char *)dest)[c] = ((const unsigned char *)src)[c];
		c++;
	}
	return (dest);
}

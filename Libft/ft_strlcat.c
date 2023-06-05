/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:25:43 by cmira-am          #+#    #+#             */
/*   Updated: 2023/04/21 08:26:10 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	rest;

	i = 0;
	while (*dest && i < size)
	{
		dest++;
		i++;
	}
	rest = ft_strlcpy(dest, src, size - i);
	return (rest + i);
}

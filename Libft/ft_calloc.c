/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 08:16:50 by cmira-am          #+#    #+#             */
/*   Updated: 2023/04/26 10:00:10 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str1;
	void	*str2;
	size_t	length;

	length = nmemb * size;
	str1 = (char *)malloc(length);
	if (str1 == 0)
		return (0);
	str2 = str1;
	ft_bzero(str2, length);
	return (str1);
}

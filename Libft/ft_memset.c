/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 07:38:39 by cmira-am          #+#    #+#             */
/*   Updated: 2023/04/27 07:59:51 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*pc;

	pc = s;
	while (n > 0)
	{
		*pc = (unsigned char)c;
		n--;
		pc++;
	}
	return (s);
}

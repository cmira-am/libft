/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:19:29 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/08 10:06:41 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	ps1;
	char	ps2;

	while (n)
	{
		ps1 = *s1++;
		ps2 = *s2++;
		if (ps1 != ps2)
			return ((unsigned char)ps1 - (unsigned char)ps2);
		if (ps1 == 0)
			break ;
		n--;
	}
	return (0);
}

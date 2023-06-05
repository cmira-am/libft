/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:22:16 by cmira-am          #+#    #+#             */
/*   Updated: 2023/04/25 14:32:24 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		pc;

	str = s;
	pc = 0;
	while (n--)
	{
		if ((unsigned char)str[pc] == (unsigned char)c)
			return ((void *)&str[pc]);
		pc++;
	}
	return (0);
}

// int main()
// {
// 	char	*patata = "erase una vez";
// 	char	*p = (char*)memchr(patata, 'o', 5);
// 	printf("%s", p);
// }

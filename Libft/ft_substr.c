/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:39:22 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/05 11:45:46 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (s == 0)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(&s[start]))
		len = ft_strlen(s) - start;
	str = (char *)malloc(len + 1);
	if (str == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}

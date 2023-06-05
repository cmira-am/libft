/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 08:35:42 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/02 08:03:35 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = ft_strlen(s1);
	if (s1 == 0 || set == 0)
		return (0);
	if (s1[count] == 0 && len == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[count]))
		count++;
	while (ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, count, len - count + 1));
}

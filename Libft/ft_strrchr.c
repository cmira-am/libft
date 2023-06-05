/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:33:56 by cmira-am          #+#    #+#             */
/*   Updated: 2023/04/25 13:35:16 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	pc;

	pc = 0;
	while (s[pc] != 0)
		pc++;
	while (s[pc] != (char)c && pc > 0)
		pc--;
	if (s[pc] == (char)c)
		return ((char *)&s[pc]);
	return (0);
}

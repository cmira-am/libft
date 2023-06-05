/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:08:55 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/09 12:06:13 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	symbol;
	int	x;

	result = 0;
	symbol = 1;
	x = 0;
	while ((str[x] && str[x] >= 9 && str[x] <= 13) || (str[x] == 32))
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			symbol *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = (result * 10) + str[x] - '0';
		x++;
	}
	return (result * symbol);
}

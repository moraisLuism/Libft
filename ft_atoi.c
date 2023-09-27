/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:15:41 by lmorais-          #+#    #+#             */
/*   Updated: 2023/08/29 17:15:44 by lmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	atoi;

	i = 0;
	s = 1;
	atoi = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			s = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		atoi *= 10;
		atoi += str[i] - 48;
		i++;
	}
	return (atoi * s);
}

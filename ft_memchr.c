/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:26:50 by lmorais-          #+#    #+#             */
/*   Updated: 2023/08/30 11:26:52 by lmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*buffer;
	unsigned char	c2;

	buffer = (unsigned char *)s;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*buffer == c2)
			return (buffer);
		buffer++;
		i++;
	}
	return (NULL);
}

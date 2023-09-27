/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:35:07 by lmorais-          #+#    #+#             */
/*   Updated: 2023/08/30 13:35:09 by lmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t			i;

	dest1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len-- > 0)
			dest1[len] = src1[len];
	}
	else
	{
		while (i < len)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dst);
}

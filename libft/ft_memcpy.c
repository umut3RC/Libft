/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:45:52 by uercan            #+#    #+#             */
/*   Updated: 2022/02/19 03:05:00 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			i;

	i = 0;
	pd = (unsigned char *)dest;
	ps = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return (dest);
}

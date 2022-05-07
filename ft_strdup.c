/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:04:25 by uercan            #+#    #+#             */
/*   Updated: 2022/02/20 12:32:46 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	my_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*str;

	str = (char *)malloc(sizeof(char) * my_strlen(src) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*src)
	{
		str[i] = *src;
		src++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

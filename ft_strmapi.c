/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.t>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:51:54 by uercan            #+#    #+#             */
/*   Updated: 2022/02/19 15:27:42 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	my_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static char	*my_strdup(const char *s1)
{
	size_t	i;
	char	*str;

	str = (char *)malloc(sizeof(char) * my_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ps;

	i = 0;
	ps = my_strdup(s);
	if (!s || !ps || !f)
		return (0);
	while (s[i])
	{
		ps[i] = f(i, ps[i]);
		i++;
	}
	return (ps);
}

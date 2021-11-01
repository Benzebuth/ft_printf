/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:59:26 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/21 16:59:31 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_charset(char c, char const *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

static int	ft_where_start(char const *str, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (ft_is_charset(str[i], set) && (!(ft_is_charset(str[i + 1], set))))
			return (i);
		else if (!(ft_is_charset(str[i], set)))
			return (--i);
		i++;
	}
	return (i);
}

static int	ft_where_end(char const *str, char const *set)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i > 0)
	{
		if (ft_is_charset(str[i], set) && (!(ft_is_charset(str[i - 1], set))))
			return (i);
		else if (!(ft_is_charset(str[i], set)))
			return (++i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	int		start;
	int		end;
	int		j;

	if (!s1 || !set)
		return (NULL);
	start = ft_where_start(s1, set);
	end = ft_where_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	dst = (char *)malloc(sizeof(char) * ((end - start)));
	if (!dst)
		return (NULL);
	j = 0;
	while (start < (end - 1))
		dst[j++] = s1[++start];
	dst[j] = '\0';
	return (dst);
}

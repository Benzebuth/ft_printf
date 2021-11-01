/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:13:13 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/14 17:13:26 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	offset;

	if (*s2 == 0)
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < n)
	{
		offset = 0;
		while (s2[offset] == s1[i + offset] && s2[offset] && i + offset < n)
			offset++;
		if (offset == ft_strlen(s2))
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}

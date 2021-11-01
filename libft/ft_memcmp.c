/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:12:19 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/14 17:12:37 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return (0);
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
		{
			return ((*(unsigned char *)s1 - *(unsigned char *)s2));
		}
		s1++;
		s2++;
	}
	return (0);
}

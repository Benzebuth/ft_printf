/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:13:10 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/14 17:13:21 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	n;

	n = ft_strlen(src);
	if ((n + 1) < size)
		ft_memcpy(dest, src, (n + 1));
	else if (size)
	{
		ft_memcpy(dest, src, (size - 1));
		dest[size - 1] = '\0';
	}
	return (n);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:12:17 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/21 16:15:49 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	if (!dest && !src)
		return (0);
	while (n)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		if (*(unsigned char *) src == (unsigned char)c)
			return (++dest);
		dest++;
		src++;
		n--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:12:15 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/21 16:28:19 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tozero;

	tozero = (void *)malloc(nmemb * size);
	if (!tozero)
		return (NULL);
	ft_bzero(tozero, nmemb * size);
	return (tozero);
}

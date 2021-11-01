/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:13:06 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/21 17:52:42 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_nbr(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 9)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static int	ft_len_div(int len)
{
	int	res;
	int	count;

	if (len == 1)
		return (1);
	res = 1;
	count = 1;
	while (count < len)
	{
		res *= 10;
		count++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		i;
	int		n_len;
	char	*dst;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_len = ft_size_nbr(n);
	dst = (char *)malloc(sizeof(char) * (n_len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		n *= -1;
		dst[0] = '-';
		i++;
		n_len--;
	}
	while (n_len > 0)
		dst[i++] = (n / ft_len_div(n_len--)) % 10 + '0';
	dst[i] = '\0';
	return (dst);
}

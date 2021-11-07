/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:21:30 by bcolin            #+#    #+#             */
/*   Updated: 2021/11/07 16:14:05 by bcolin           ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	count++;
	return (count);
}

int	ft_putnbr_base(long int nb, char *base)
{
	int	size_base;
	int	nb_len;

	nb_len = ft_nbrlen(nb);
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb *= -1;
	}
	size_base = ft_strlen(base);
	if (nb >= size_base)
	{
		ft_putnbr_base(nb / 10, base);
		ft_putnbr_base(nb % 10, base);
	}
	else
		write(1, &base[nb], 1);
	return (nb_len);
}

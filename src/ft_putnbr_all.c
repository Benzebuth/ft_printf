/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:21:30 by bcolin            #+#    #+#             */
/*   Updated: 2021/11/08 16:23:05 by bcolin           ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned_count(unsigned int nb, int *count_print)
{
	unsigned int	u_nb;

	u_nb = (unsigned int)nb;
	if (u_nb > 9)
	{
		ft_putnbr_unsigned_count(u_nb / 10, count_print);
		ft_putnbr_unsigned_count(u_nb % 10, count_print);
	}
	else
		ft_putchar_count(u_nb + '0', count_print);
}


void	ft_putnbr_int_count(int nb_recu, int *count_print)
{
	unsigned int	nb;

	if (nb_recu < 0)
	{
		nb = (unsigned int)(nb_recu * -1);
		ft_putchar_count('-', count_print);
	}
	else
		nb = (unsigned int)(nb_recu);
	if (nb > 9)
	{
		ft_putnbr_int_count(nb / 10, count_print);
		ft_putnbr_int_count(nb % 10, count_print);
	}
	else
		ft_putchar_count(nb + '0', count_print);
}

int	ft_nbrlen_hexa(int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		count++;
	while (nb > 0)
	{
		nb /= 16;
		count++;
	}
	return (count);
}

void	ft_putnbr_base(unsigned long nb, int *count_print, char *base)
{
	size_t	size_base;

	size_base = ft_strlen(base);
	if (*count_print == 0)
		*count_print += ft_nbrlen_hexa(nb);
	if (nb >= size_base)
	{
		ft_putnbr_base(nb / size_base, count_print, base);
		ft_putnbr_base(nb % size_base, count_print, base);
	}
	else
		ft_putchar_fd(base[nb], 1);
}

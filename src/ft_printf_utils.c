/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:49:07 by bcolin            #+#    #+#             */
/*   Updated: 2021/11/08 16:17:58 by bcolin           ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_percent(const char *str)
{
	int	i;
	int	percent_count;
	int	double_percent_count;

	if (!str)
		return (0);
	percent_count = 0;
	double_percent_count = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == PERCENT && str[i + 1] == PERCENT)
		{
			double_percent_count++;
			i++;
		}
		else if (str[i] == PERCENT)
			percent_count++;
	}
	i -= (percent_count * 2) + (double_percent_count * 2);
	return (i);
}

void	ft_putchar_count(char c, int *count_print)
{
	write(1, &c, 1);
	*count_print += 1;
}

void	ft_putstr_count(const char *str, int *count_print)
{
	int	i;

	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		*count_print += 6;
		return ;
	}
	i = -1;
	while (str[++i])
		ft_putchar_count(str[i], count_print);
}

void	ft_pointer_address(void *ptr, int *count_print)
{
	ft_putstr_count("0x", count_print);
	ft_putnbr_base((long)ptr, count_print, HEXA_BASE);
}

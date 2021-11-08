/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:17:22 by bcolin            #+#    #+#             */
/*   Updated: 2021/11/08 21:45:46 by bcolin           ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_extract_type(va_list arg_list, const char *str, int count)
{
	int	nb_written;

	nb_written = 0;
	if (str[count] == PERCENT)
		ft_putchar_count(PERCENT, &nb_written);
	else if (str[count] == CHAR)
		ft_putchar_count(va_arg(arg_list, int), &nb_written);
	else if (str[count] == STRING)
		ft_putstr_count(va_arg(arg_list, char *), &nb_written);
	else if (str[count] == DECIMAL)
		ft_putnbr_int_count(va_arg(arg_list, int), &nb_written);
	else if (str[count] == INT)
		ft_putnbr_int_count(va_arg(arg_list, int), &nb_written);
	else if (str[count] == UNSIGNED)
		ft_putnbr_unsigned_count(va_arg(arg_list, unsigned int), &nb_written);
	else if (str[count] == HEXA)
		ft_putnbr_base(va_arg(arg_list, unsigned int), &nb_written,
			HEXA_BASE);
	else if (str[count] == HEXA_UPPER)
		ft_putnbr_base(va_arg(arg_list, unsigned int), &nb_written,
			HEXA_BASE_UPPER);
	else if (str[count] == POINTER)
		ft_pointer_address(va_arg(arg_list, void *), &nb_written);
	return (nb_written);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg_list;
	int		count_send;
	int		i;

	count_send = 0;
	va_start(arg_list, str);
	count_send = ft_count_percent(str);
	i = -1;
	while (str[++i])
	{
		if (str[i] == '%')
			count_send += ft_extract_type(arg_list, str, ++i);
		else
			ft_putchar_fd(str[i], 1);
	}
	va_end(arg_list);
	return (count_send);
}

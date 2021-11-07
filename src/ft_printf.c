/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:17:22 by bcolin            #+#    #+#             */
/*   Updated: 2021/11/07 15:45:02 by bcolin           ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_extract_type(const char *str, size_t *i, va_list arg_list)
{
	int	len;

	len = 0;
	*i += 1;
	if (str[(*i)] == '%')
	{
		ft_putchar_fd(str[*i], 1);
		return (1);
	}
	else if (str[(*i)] == 'c')
	{
		ft_is_char(arg_list);
		return (1);
	}
	else if (str[(*i)] == 's')
	{
		len = ft_is_string(arg_list);
		return (len);
	}
	else if (str[(*i)] == 'p')
	{
		ft_putstr_fd("0x", 1);
		len = ft_is_pointer(arg_list) + 2;
		return (len);
	}





	else if (str[(*i)] == 'd')
	{
		ft_putchar_fd(str[*i], 1);
		return (1);
	}
	else if (str[(*i)] == 'i')
	{
		ft_putchar_fd(str[*i], 1);
		return (1);
	}
	else if (str[(*i)] == 'u')
	{
		ft_putchar_fd(str[*i], 1);
		return (1);
	}
	else if (str[(*i)] == 'x')
	{
		ft_putchar_fd(str[*i], 1);
		return (1);
	}
	else if (str[(*i)] == 'X')
	{
		ft_putchar_fd(str[*i], 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg_list;
	int	count;
	size_t	i;

	count = 0;
	va_start(arg_list, str);
	i = -1;
	while (str[++i])
	{
		if (str[i] == '%')
		{
			count += ft_extract_type(str, &i, arg_list);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			count++;
		}
	}
	return (count);
}

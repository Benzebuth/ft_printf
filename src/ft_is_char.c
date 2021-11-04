/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:49:07 by bcolin            #+#    #+#             */
/*   Updated: 2021/11/04 21:07:36 by bcolin           ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_is_char(va_list arg_list)
{
	char	c;
	c = (char)va_arg(arg_list, int);
	ft_putchar_fd(c, 1);
}

int	ft_is_string(va_list arg_list)
{
	char	*str;
	int		len;

	str = va_arg(arg_list, char *);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	return (len);
}

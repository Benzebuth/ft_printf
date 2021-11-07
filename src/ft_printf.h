/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:11:31 by bcolin            #+#    #+#             */
/*   Updated: 2021/11/07 15:52:04 by bcolin           ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//include
# include <stdarg.h>
# include "../libft/libft.h"

// !!!!! A DELETE avant de push
#include <stdio.h>

//prototype
int	    ft_printf(const char *str, ...);
void	ft_is_char(va_list arg_list);
int	    ft_is_string(va_list arg_list);
int	    ft_is_pointer(va_list arg_list);
int	    ft_putnbr_base(long int nb, char *base);


#endif

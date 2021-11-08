/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:11:31 by bcolin            #+#    #+#             */
/*   Updated: 2021/11/08 16:23:55 by bcolin           ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//macro defines
# define PERCENT '%'
# define CHAR 'c'
# define INT 'i'
# define DECIMAL 'd'
# define UNSIGNED 'u'
# define STRING 's'
# define POINTER 'p'
# define HEXA 'x'
# define HEXA_UPPER 'X'
# define HEXA_BASE "0123456789abcdef"
# define HEXA_BASE_UPPER "0123456789ABCDEF"

//include
# include <stdarg.h>
# include "../libft/libft.h"

//prototype
int	    ft_printf(const char *str, ...);
int	    ft_count_percent(const char *str);
void	ft_putchar_count(char c, int *count_print);
void	ft_putstr_count(const char *str, int *count_print);
void	ft_pointer_address(void *ptr, int *count_print);
void	ft_putnbr_unsigned_count(unsigned int nb, int *count_print);
void	ft_putnbr_int_count(int nb, int *count_print);
int		ft_nbrlen_hexa(int nb);
void	ft_putnbr_base(unsigned long nb, int *count_print, char *base);

#endif

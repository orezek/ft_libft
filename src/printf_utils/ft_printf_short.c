/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_short.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:12:45 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/21 18:36:51 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_printf_short(char *format, int *ptr_chars_printed, va_list *args)
{
	if (*format == 's')
		ft_putstr(va_arg(*args, char *), ptr_chars_printed);
	else if (*format == 'd')
		ft_putnbr(va_arg(*args, int), ptr_chars_printed);
	else if (*format == 'c')
		ft_putchar(va_arg(*args, int), ptr_chars_printed);
	else if (*format == 'p')
		ft_putptr(va_arg(*args, void *), ptr_chars_printed);
	else if (*format == 'i')
		ft_putnbr(va_arg(*args, int ), ptr_chars_printed);
	else if (*format == 'u')
		ft_putnbr_unsigned(va_arg(*args, unsigned int), ptr_chars_printed);
	else if (*format == 'x')
		ft_puthex(va_arg(*args, unsigned int), ptr_chars_printed);
	else if (*format == 'X')
		ft_puthex_upper(va_arg(*args, unsigned int), ptr_chars_printed);
	else if (*format == '%')
		ft_putchar('%', ptr_chars_printed);
	else
		return (-1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:27:30 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/15 21:12:16 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		chars_printed;
	int		*ptr_chars_printed;

	chars_printed = 0;
	ptr_chars_printed = &chars_printed;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_printf_short((char *)format, ptr_chars_printed, &args) == -1)
				return (chars_printed += 1);
		}
		else
			ft_putchar(*format, ptr_chars_printed);
		format++;
	}
	return (va_end(args), chars_printed);
}

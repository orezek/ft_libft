/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:27:30 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/21 18:36:57 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

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

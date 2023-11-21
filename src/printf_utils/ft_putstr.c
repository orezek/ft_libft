/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:51:45 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/15 15:33:13 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstr(char *str, int *ptr_chars_printed)
{
	if (str != NULL)
	{
		while (*str)
			ft_putchar(*(str++), ptr_chars_printed);
	}
	else
		ft_putstr("(null)", ptr_chars_printed);
}

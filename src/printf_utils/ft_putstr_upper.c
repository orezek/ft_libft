/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:51:45 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/14 13:17:32 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstr_upper(char *str, int *ptr_chars_printed)
{
	while (*str)
		ft_putchar(ft_toupper(*(str++)), ptr_chars_printed);
}

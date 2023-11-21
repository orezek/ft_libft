/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:51:45 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/21 18:37:25 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_putstr_upper(char *str, int *ptr_chars_printed)
{
	while (*str)
		ft_putchar(ft_toupper(*(str++)), ptr_chars_printed);
}

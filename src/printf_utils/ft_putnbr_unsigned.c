/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:09:37 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/21 18:37:14 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_putnbr_unsigned(unsigned int n, int *ptr_chars_printed)
{
	char	*ptr;
	char	*or_ptr;

	ptr = ft_unsigned_itoa(n);
	or_ptr = ptr;
	while (*ptr)
		ft_putchar(*(ptr++), ptr_chars_printed);
	free(or_ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:28:48 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/21 18:37:17 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_putnbr(int n, int *ptr_chars_printed)
{
	char	*ptr;
	char	*or_ptr;

	ptr = ft_itoa(n);
	or_ptr = ptr;
	while (*ptr)
		ft_putchar(*(ptr++), ptr_chars_printed);
	free(or_ptr);
}

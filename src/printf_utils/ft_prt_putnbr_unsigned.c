/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:09:37 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/21 21:56:09 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_prt_putnbr_unsigned(unsigned int n, int *ptr_chars_printed)
{
	char	*ptr;
	char	*or_ptr;

	ptr = ft_prt_unsigned_itoa(n);
	or_ptr = ptr;
	while (*ptr)
		ft_prt_putchar(*(ptr++), ptr_chars_printed);
	free(or_ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:49:52 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/21 18:37:01 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_putchar(char c, int *ptr_chars_printed)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	write(1, &uc, sizeof(uc));
	*ptr_chars_printed += 1;
}

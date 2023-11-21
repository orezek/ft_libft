/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:30:36 by orezek            #+#    #+#             */
/*   Updated: 2023/10/29 16:53:59 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *block, int c, size_t size)
{
	unsigned char	filler;
	unsigned char	*ptr;
	size_t			limit;

	filler = (unsigned char) c;
	ptr = (unsigned char *) block;
	limit = 0;
	while (limit < size)
	{
		*ptr = filler;
		limit++;
		ptr++;
	}
	return (ptr - size);
}

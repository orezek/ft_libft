/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:30:12 by orezek            #+#    #+#             */
/*   Updated: 2023/10/29 16:53:31 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	unsigned char	*ptr;
	unsigned char	byte;
	size_t			start;

	ptr = (unsigned char *) block;
	byte = (unsigned char) c;
	start = 0;
	while (start < size)
	{
		if (*(ptr + start) == byte)
			return ((void *)(ptr + start));
		start++;
	}
	return (NULL);
}

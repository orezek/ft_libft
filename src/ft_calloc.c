/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:29:00 by orezek            #+#    #+#             */
/*   Updated: 2023/10/29 16:52:00 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t eltsize)
{
	void	*ptr;

	ptr = malloc(count * eltsize);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, count * eltsize);
	return (ptr);
}

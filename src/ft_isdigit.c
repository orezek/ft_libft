/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:29:49 by orezek            #+#    #+#             */
/*   Updated: 2023/11/02 12:08:23 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	digit;

	if (c == EOF)
		return (0);
	if (c < 256)
	{
		digit = (unsigned char) c;
		if (digit >= '0' && digit <= '9' )
			return (1);
	}
	return (0);
}

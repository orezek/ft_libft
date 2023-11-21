/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:15:46 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/15 21:22:02 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hexlen(uint64_t bin_n)
{
	int	i;

	i = 0;
	while (bin_n)
	{
		i++;
		bin_n >>= 4;
	}
	return (i);
}

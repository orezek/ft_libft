/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:28:16 by orezek            #+#    #+#             */
/*   Updated: 2023/10/29 17:10:47 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	unsigned char	l;

	l = (unsigned char) c;
	if (l == ' ' || l == '\f' || l == '\n'
		|| l == '\r' || l == '\t' || l == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *string)
{
	int	is_negative;
	int	result;

	result = 0;
	is_negative = 0;
	while (ft_isspace(*string))
		string++;
	if (*string == '-')
	{
		is_negative = 1;
		string++;
	}
	else if (*string == '+')
		string++;
	while (ft_isdigit(*string))
	{
		if (!ft_isdigit(*(string + 1)))
		{
			if (is_negative)
				return ((result += ((int) *string) - 48) * -1);
			return (result += ((int) *string) - 48);
		}
		result = (result + (((int) *string++) - 48)) * 10;
	}
	return (0);
}

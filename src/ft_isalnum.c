/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:29:11 by orezek            #+#    #+#             */
/*   Updated: 2023/10/29 16:52:05 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	letter;

	if (c == EOF)
		return (0);
	letter = (unsigned char) c;
	if (ft_isalpha(letter) || ft_isdigit(letter))
		return (1);
	return (0);
}

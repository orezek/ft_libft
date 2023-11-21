/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:33:03 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/21 21:57:30 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_prt_strdup(char *src)
{
	char	*des;
	int		i;

	i = 0;
	des = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}

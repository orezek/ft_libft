/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:33:03 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/21 18:37:38 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strdup(char *src)
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

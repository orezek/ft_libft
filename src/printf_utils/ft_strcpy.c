/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:15:06 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/21 18:37:34 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strcpy(char *des, char *src)
{
	char	*ptr_des;

	ptr_des = des;
	while (*src)
	{
		*des++ = *src++;
	}
	*des = '\0';
	return (ptr_des);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:15:06 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/21 21:57:24 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_prt_strcpy(char *des, char *src)
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

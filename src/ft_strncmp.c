/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:36:43 by orezek            #+#    #+#             */
/*   Updated: 2023/11/02 10:31:31 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	unsigned char		start;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	start = 0;
	while (start < size)
	{
		if (*(str1 + start) == '\0' && *(str2 + start) == '\0')
			break ;
		else if (*(str1 + start) < *(str2 + start))
			return (*(str1 + start) - *(str2 + start));
		else if (*(str1 + start) > *(str2 + start))
			return (*(str1 + start) - *(str2 + start));
		start++;
	}
	return (0);
}

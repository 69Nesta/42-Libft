/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpetit <rpetit@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:34:15 by rpetit            #+#    #+#             */
/*   Updated: 2025/11/06 10:15:21 by rpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
(l_to_find - 1) : Optimization consisting of not checking the last 
characters of the string depending on the size of to_find
*/

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l_to_find;

	i = 0;
	l_to_find = 0;
	while (to_find[l_to_find])
		l_to_find++;
	if (l_to_find == 0)
		return ((char *)str);
	while (i + (l_to_find - 1) < len && str[i])
	{
		j = 0;
		while (i + j < len && str[i + j] == to_find[j]
			&& str[i + j] && to_find[j])
			j++;
		if (to_find[j] == 0 || i == len)
			return ((char *)str + i);
		i++;
	}
	return (0);
}

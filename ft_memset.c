/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpetit <rpetit@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:15:40 by rpetit            #+#    #+#             */
/*   Updated: 2025/11/05 13:41:51 by rpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;
	int*	tmp;

	i = 0;
	while (i < count)
	{
		tmp = &pointer[i];
		*tmp = value;
		i++;
	}
	return (pointer);
}
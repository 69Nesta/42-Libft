/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpetit <rpetit@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:15:45 by rpetit            #+#    #+#             */
/*   Updated: 2025/11/13 09:50:58 by rpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char *) s1)[i] == ((char *) s2)[i] && ((char *) s1)[i])
		i++;
	if (i < n)
		return (((char unsigned *) s1)[i] - ((char unsigned *) s2)[i]);
	return (0);
}

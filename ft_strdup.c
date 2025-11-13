/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpetit <rpetit@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:22:31 by rpetit            #+#    #+#             */
/*   Updated: 2025/11/13 11:00:53 by rpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	size_t	i;
	char	*dup;

	i = 0;
	while (string[i] != 0)
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (string[i] != 0 && dup)
	{
		dup[i] = string[i];
		i++;
	}
	if (dup)
		dup[i] = '\0';
	return (dup);
}

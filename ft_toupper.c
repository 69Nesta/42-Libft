/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpetit <rpetit@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:35:58 by rpetit            #+#    #+#             */
/*   Updated: 2025/11/05 17:43:31 by rpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isalphalower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_toupper(int c)
{
	if (ft_isalphalower(c))
		return (c - ('a' - 'A'));
	return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpetit <rpetit@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:35:36 by rpetit            #+#    #+#             */
/*   Updated: 2025/11/12 12:44:16 by rpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(unsigned int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr(n * -1, fd);
	}
	else
		ft_putnbr(n, fd);
}

static void	ft_putnbr(unsigned int n, int fd)
{
	if (n / 10 > 0)
		ft_putnbr(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

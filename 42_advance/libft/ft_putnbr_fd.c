/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:45:05 by username          #+#    #+#             */
/*   Updated: 2026/11/11 17:52:35 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nb;

	nb = (long) n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	c = nb % 10 + '0';
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putnbr_fd(123, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-123, 2);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(INT_MAX, 2);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(INT_MIN, 2);
// 	write(1, "\n", 1);
// }

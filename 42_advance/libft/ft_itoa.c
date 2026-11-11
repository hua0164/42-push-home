/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:17:34 by username          #+#    #+#             */
/*   Updated: 2026/11/11 15:30:37 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fill_words(char *str, int len, int n)
{
	long	nb;

	nb = (long) n;
	if (nb < 0)
		nb = -nb;
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (nb > 0)
	{
		str[--len] = nb % 10 + '0';
		nb = nb / 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*str;

	nb = (long) n;
	len = 0;
	if (nb <= 0)
		len++;
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		len++;
		nb = nb / 10;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	fill_words(str, len, n);
	return (str);
}

// int	main(void)
// {
// 	int		i;
// 	char	*str;

// 	i = -123;
// 	str = ft_itoa(i);
// 	printf("%s\n", str);
// 	free(str);
// }

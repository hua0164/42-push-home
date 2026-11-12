/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:13:18 by username          #+#    #+#             */
/*   Updated: 2026/11/12 14:24:01 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p = b;
	unsigned char	value = (unsigned char) c;
	size_t			i;

	i = 0;
	while (i < len)
	{
		p[i] = value;
		i++;
	}
	return (p);
}
#include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "hello";
// 	char	*s2 = ft_memset(s1, 65, 4);

// 	printf("%s\n", s2);
// }

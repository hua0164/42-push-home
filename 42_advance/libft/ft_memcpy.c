/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 21:57:40 by username          #+#    #+#             */
/*   Updated: 2026/11/06 22:33:23 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*d;
	unsigned char		*original;
	const unsigned char	*s;
	size_t				i;

	d = dst;
	original = dst;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (original);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	s1[] = "hello";
// 	char	s2[] = "hey";
// 	char	*str;

// 	str = ft_memcpy(s1, s2, 3);
// 	printf("%s\n", str);
// 	printf("%s\n", s1);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 19:59:00 by username          #+#    #+#             */
/*   Updated: 2026/11/07 20:04:21 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locate byte in byte string
#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*src;

	a = (unsigned char) c;
	src = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (src[i] == a)
			return (&src[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	src[] = "hello";
// 	char	c = '\0';

// 	printf("%p\n", src + 5);
// 	printf("%p\n", (char *) ft_memchr(src, c, 7));
// 	printf("%s\n", (char *) ft_memchr(src, c, 7));
// }

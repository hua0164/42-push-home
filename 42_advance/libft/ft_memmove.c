/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:00:43 by username          #+#    #+#             */
/*   Updated: 2026/11/07 18:39:29 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	if (d > s)
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	s[] = "ABCDE";

// 	printf("before: %p %s\n", s, s);
// 	ft_memmove(s + 1, s, 2);
// 	printf("after: %p %s\n", s, s);
// }

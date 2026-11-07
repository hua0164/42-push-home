/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 23:30:28 by username          #+#    #+#             */
/*   Updated: 2026/11/06 23:50:55 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;
	size_t	len;

	len_dst = 0;
	while ((len_dst < dstsize) && dst[len_dst])
		len_dst++;
	len_src = 0;
	while (src[len_src])
		len_src++;
	if (dstsize == len_dst)
		return (len_dst + len_src);
	len = dstsize - len_dst - 1;
	i = 0;
	while (i < len && src[i])
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

// int	main(void)
// {
// 	char	dst[12] = "Hllo";
// 	char	src[] = ", world";

// 	printf("%zu\n", ft_strlcat(dst, src, 8));
// 	printf("%s\n", dst);
// }

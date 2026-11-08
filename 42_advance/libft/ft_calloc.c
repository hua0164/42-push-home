/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:39:59 by username          #+#    #+#             */
/*   Updated: 2026/11/08 12:46:11 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//SIZE_MAX is the largest value represented by size_t

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*str;
	size_t			i;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	str = malloc(count * size);
	if (!str)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	unsigned char	*str;
// 	size_t			i;

// 	str = ft_calloc(2, 3);
// 	if (!str)
// 		return (1);
// 	i = 0;
// 	while (i < 6)
// 	{
// 		printf("str[%zu] = %u\n", i, (unsigned int) str[i]);
// 		i++;
// 	}
// 	free(str);
// }

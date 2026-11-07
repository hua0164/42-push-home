/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 18:52:41 by username          #+#    #+#             */
/*   Updated: 2026/11/07 18:57:44 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locate the last occurrence of c
#include <stddef.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("result = %s\n", ft_strrchr("hello", 'e'));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 18:47:08 by username          #+#    #+#             */
/*   Updated: 2026/11/12 14:53:47 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locate firt occurrence of character in string
#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char) c == (unsigned char) s[i])
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n", strchr("Hello", 'l'));
// }

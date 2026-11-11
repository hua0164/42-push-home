/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:33:10 by username          #+#    #+#             */
/*   Updated: 2026/11/11 15:51:19 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				len;
	char			*str;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	plus_one(unsigned int i, char c)
{
	char	d;

	d = c + i;
	return (d);
}

// int	main(void)
// {
// 	char	s[] = "1234";
// 	char	*str;

// 	str = ft_strmapi(s, plus_one);
// 	printf("%s\n", str);
// 	free(str);
// }

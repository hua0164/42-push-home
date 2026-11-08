/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:50:47 by username          #+#    #+#             */
/*   Updated: 2026/11/08 16:45:22 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdint.h>

static size_t	ft_str_len(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;
	char	*dst;

	len1 = ft_str_len(s1);
	len2 = ft_str_len(s2);
	if (len1 == SIZE_MAX || len2 > SIZE_MAX - len1 - 1)
		return (NULL);
	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	dst = str;
	while (*s1)
		*dst++ = *s1++;
	while (*s2)
		*dst++ = *s2++;
	*dst = '\0';
	return (str);
}
//dst moves forward, but str stays at the beginning

// int	main(void)
// {
// 	char	*s1, *s2, *s3, *s4, *s5;

// 	s1 = ft_strjoin("hello", ", world");
// 	s2 = ft_strjoin("hello", "");
// 	s3 = ft_strjoin("", ", world");
// 	s4 = ft_strjoin("", "");
// 	s5 = ft_strjoin("ab\0cd", "ef");
// 	if (!(s1 && s2 && s3 && s4 && s5))
// 	{
// 		free(s1);
// 		free(s2);
// 		free(s3);
// 		free(s4);
// 		free(s5);
// 		return (1);
// 	}
// 	printf("%s: %s\n", strcmp(s1, "hello, world") == 0 ? "T" : "F", s1);
// 	printf("%s: %s\n", strcmp(s2, "hello") == 0 ? "T" : "F", s2);
// 	printf("%s: %s\n", strcmp(s3, ", world") == 0 ? "T" : "F", s3);
// 	printf("%s: %s\n", strcmp(s4, "") == 0 ? "T" : "F", s4);
// 	printf("%s: %s\n", strcmp(s5, "abef") == 0 ? "T" : "F", s5);
// 	free(s1);
// 	free(s2);
// 	free(s3);
// 	free(s4);
// 	free(s5);
// 	return (0);
// }

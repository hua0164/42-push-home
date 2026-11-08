/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 16:52:47 by username          #+#    #+#             */
/*   Updated: 2026/11/08 17:14:27 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*src;

	while (*s1 && is_set(set, *s1))
		s1++;
	len = 0;
	while (s1[len])
		len++;
	while (len >= 1 && is_set(set, s1[len - 1]))
		len--;
	src = malloc(len + 1);
	if (!src)
		return (NULL);
	i = 0;
	while (i < len)
	{
		src[i] = s1[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
//treats set as a collection of individual characters to remove

// int	main(void)
// {
// 	char	*s1, *s2, *s3, *s4, *s5;

// 	s1 = ft_strtrim("abbaahelloabb", "ab");
// 	s2 = ft_strtrim("  hello ", " ");
// 	s3 = ft_strtrim("!? he llo!! ", "!? ");
// 	s4 = ft_strtrim("", "ab");
// 	s5 = ft_strtrim("abab", "ab");
// 	if (!(s1 && s2 && s3 && s4 && s5))
// 	{
// 		free(s1);
// 		free(s2);
// 		free(s3);
// 		free(s4);
// 		free(s5);
// 		return (1);
// 	}
// 	printf("%s: %s\n", strcmp(s1, "hello") == 0 ? "T" : "F", s1);
// 	printf("%s: %s\n", strcmp(s2, "hello") == 0 ? "T" : "F", s2);
// 	printf("%s: %s\n", strcmp(s3, "he llo") == 0 ? "T" : "F", s3);
// 	printf("%s: %s\n", strcmp(s4, "") == 0 ? "T" : "F", s4);
// 	printf("%s: %s\n", strcmp(s5, "") == 0 ? "T" : "F", s5);
// 	free(s1);
// 	free(s2);
// 	free(s3);
// 	free(s4);
// 	free(s5);
// 	return (0);
// }

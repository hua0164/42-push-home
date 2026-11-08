/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:15:21 by username          #+#    #+#             */
/*   Updated: 2026/11/08 15:49:00 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	j;
	size_t	s_len;

	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start > s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	j = 0;
	while (j < len)
	{
		substr[j++] = s[start++];
	}
	substr[j] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	char	str[] = "interesting";
// 	char	*s1, *s2, *s3, *s4;

// 	s1 = ft_substr(str, 2, 3);
// 	s2 = ft_substr(str, 2, SIZE_MAX);
// 	s3 = ft_substr(str, 100, 3);
// 	s4 = ft_substr(str, 0, 0);
// 	if (!(s1 && s2 && s3 && s4))
// 	{
// 		free(s1);
// 		free(s2);
// 		free(s3);
// 		free(s4);
// 		return (1);
// 	}
// 	printf("%s\n", strcmp(s1, "ter") == 0 ? "T" : "F");
// 	printf("%s\n", strcmp(s2, "teresting") == 0 ? "T" : "F");
// 	printf("%s\n", strcmp(s3, "") == 0 ? "T" : "F");
// 	printf("%s\n", strcmp(s4, "") == 0 ? "T" : "F");
// 	free(s1);
// 	free(s2);
// 	free(s3);
// 	free(s4);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 19:43:20 by username          #+#    #+#             */
/*   Updated: 2026/11/12 15:02:41 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && (unsigned char) s1[i] == (unsigned char) s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;

	len_needle = 0;
	while (needle[len_needle])
		len_needle++;
	if (len_needle == 0)
		return (haystack);
	i = 0;
	while (i < len && len_needle <= len - i && haystack[i])
	{
		if (ft_strncmp(&haystack[i], needle, len_needle) == 0)
			return (haystack + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	haystack[] = "thisiswhatIwant";
// 	char	needle[] = "I";

// 	printf("%s\n", ft_strnstr(haystack, needle, 13));
// }

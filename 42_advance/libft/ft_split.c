/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 17:40:32 by username          #+#    #+#             */
/*   Updated: 2026/11/11 15:08:05 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	words_num(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*next_word(char const *s, char c)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i + j] && s[i + j] != c)
		j++;
	word = malloc((j + 1) * sizeof(char));
	if (!word)
		return (NULL);
	j = 0;
	while (s[i] && s[i] != c)
	{
		word[j++] = s[i++];
	}
	word[j] = '\0';
	return (word);
}

static char	**free_words(char **words, int i)
{
	while (i > 0)
		free(words[--i]);
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	int		count;

	count = words_num(s, c);
	words = malloc((count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	while (i < count)
	{
		words[i] = next_word(s, c);
		if (!words[i])
			return (free_words(words, i));
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
			s++;
		i++;
	}
	words[i] = NULL;
	return (words);
}

// int	main(void)
// {
// 	char	s1[] = "hello this is life";
// 	char	c = ' ';
// 	char	**words;
// 	int		i;

// 	words = ft_split(s1, c);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// }

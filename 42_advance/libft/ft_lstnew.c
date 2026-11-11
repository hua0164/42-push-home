/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:55:54 by username          #+#    #+#             */
/*   Updated: 2026/11/11 21:43:48 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	t_list	*new;
// 	int		n;

// 	n = 123;
// 	new = ft_lstnew(&n);
// 	if (!new)
// 		return (1);
// 	printf("%d\n", *(int *) new->content);
// 	printf("%p\n", (void *) new->next);
// 	free(new);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 23:24:45 by username          #+#    #+#             */
/*   Updated: 2026/11/12 00:00:10 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static void	del(void *content)
{
	free(content);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next;
	}
}

// int	main(void)
// {
// 	t_list	*node;
// 	int		*a;

// 	a = malloc(sizeof(int));
// 	if (!a)
// 		return (1);
// 	node = malloc(sizeof(t_list));
// 	if (!node)
// 	{
// 		free(a);
// 		return (1);
// 	}
// 	*a = 123;
// 	node->next = NULL;
// 	node->content = a;
// 	printf("before: %d\n", *(int *) node->content);
// 	ft_lstclear(&node, del);
// 	if (node == NULL)
// 		printf("After: node has been freed\n");
// 	return (0);
// }

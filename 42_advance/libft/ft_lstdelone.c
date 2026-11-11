/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 22:51:58 by username          #+#    #+#             */
/*   Updated: 2026/11/11 23:23:43 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	del(void *content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
// 	ft_lstdelone(node, del);
// 	printf("After: node has been freed\n");
// 	return (0);
// }

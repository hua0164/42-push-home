/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 00:18:38 by username          #+#    #+#             */
/*   Updated: 2026/11/12 14:10:28 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// static void	*plus_one(void *content)
// {
// 	int	*new;

// 	new = malloc(sizeof(int));
// 	if (!new)
// 		return (NULL);
// 	*new = *(int *) content + 1;
// 	return (new);
// }

t_list	*if_fail(t_list **node, void *content, void (*del)(void *))
{
	del(content);
	ft_lstclear(node, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (if_fail(&new_list, NULL, del));
		node = ft_lstnew(content);
		if (!node)
			return (if_fail(&new_list, content, del));
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

// int	main(void)
// {
// 	t_list	node1;
// 	t_list	node2;
// 	t_list	*new;
// 	int		a;
// 	int		b;

// 	a = 1;
// 	b = 2;
// 	node2.next = NULL;
// 	node2.content = &b;
// 	node1.next = &node2;
// 	node1.content = &a;
// 	new = ft_lstmap(&node1, plus_one, del);
// 	printf("%d\n", *(int *) new->content);
// 	printf("%d\n", *(int *) new->next->content);
// 	ft_lstclear(&new, del);
// }

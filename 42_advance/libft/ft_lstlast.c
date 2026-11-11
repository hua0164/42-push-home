/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 21:53:42 by username          #+#    #+#             */
/*   Updated: 2026/11/11 22:11:51 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	node1;
// 	t_list	node2;
// 	t_list	node3;
// 	t_list	*result;
// 	int		a = 1;
// 	int		b = 2;
// 	int		c = 3;

// 	node3.next = NULL;
// 	node3.content = &c;
// 	node2.next = &node3;
// 	node2.content = &b;
// 	node1.next = &node2;
// 	node1.content = &a;
// 	result = ft_lstlast(&node1);
// 	printf("%d\n", *(int *) result->content);
// 	return (0);
// }

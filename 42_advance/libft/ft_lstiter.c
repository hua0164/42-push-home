/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 00:01:47 by username          #+#    #+#             */
/*   Updated: 2026/11/12 00:17:27 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	plus_one(void *content)
{
	*(int *) content = *(int *) content + 1;
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int	main(void)
// {
// 	t_list	node1;
// 	t_list	node2;
// 	int		a;
// 	int		b;

// 	a = 1;
// 	b = 2;
// 	node2.next = NULL;
// 	node2.content = &b;
// 	node1.next = &node2;
// 	node1.content = &a;
// 	ft_lstiter(&node1, plus_one);
// 	printf("%d\n", *(int *) node1.content);
// 	printf("%d\n", *(int *) node2.content);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:55:55 by username          #+#    #+#             */
/*   Updated: 2026/11/11 21:44:15 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	node1;
// 	t_list	node2;
// 	t_list	*lst;
// 	t_list	*new;
// 	int		a = 1;
// 	int		b = 2;

// 	node1.next = NULL;
// 	node1.content = &a;
// 	node2.next = NULL;
// 	node2.content = &b;
// 	lst = &node1;
// 	new = &node2;
// 	ft_lstadd_front(&lst, new);
// 	printf("%d\n", *(int *) lst->content);
// 	printf("%d\n", *(int *) lst->next->content);
// }

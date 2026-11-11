/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a1-6 <a1-6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 21:29:00 by username          #+#    #+#             */
/*   Updated: 2026/11/11 21:46:29 by a1-6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	node1;
// 	t_list	node2;
// 	t_list	node3;

// 	node1.next = &node2;
// 	node2.next = &node3;
// 	node3.next = NULL;
// 	printf("%u\n", ft_lstsize(&node1));
// }

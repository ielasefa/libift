/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:52:04 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/03 17:33:11 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int	main(void) {
	t_list *head = NULL;
	int n1 = 1, n2 = 2;

	t_list *node1 = ft_lstnew(&n1);
	ft_lstadd_front(&head, node1);

	t_list *node2 = ft_lstnew(&n2);
	ft_lstadd_front(&head, node2);

	int size = ft_lstsize(head);
	printf("List size: %d\n", size); // Should print "List size: 2"
	}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:15:58 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/05 13:19:17 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void) {
	t_list *head = NULL;

	int n1 = 5, n2 = 2;

	t_list *node1 = ft_lstnew(&n1);
	ft_lstadd_front(&head, node1);

	t_list *node2 = ft_lstnew(&n2);
	ft_lstadd_front(&head, node2);

	t_list *last = ft_lstlast(head);
	if (last) {
		printf("Last node content: %d\n", *(int *)last->content);
			// Should print "Last node content: 1"
	} else {
		printf("The list is empty.\n");
	}
	}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:09:53 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/03 17:30:19 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list *head = NULL;
	int n1 = 1, n2 = 2;

	t_list *node1 = ft_lstnew(&n1);

	t_list *node2 = ft_lstnew(&n2);

	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);

	t_list *current = head;
	printf("List contents: ");
	while (current)
	{
		printf("%d -> ", *(int *)current->content);
		current = current->next;
	}
	printf("NULL\n");

}*/

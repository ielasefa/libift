/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:49:25 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/05 23:53:03 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
void	del(void *content)
{
	int	*new_value;

	void	*double_value(void *content)
{
	new_value = malloc(sizeof(int));
	if (!new_value)
		return (NULL);
	*new_value = (*(int *)content) * 2;
	return (new_value);
}
	free(content);
}

void	tober(void* content)
{
	t_list
}
int	main(void)
{
	t_list	*head;
	int		*node;
	int		*node1;
	int		*node2;
	t_list	*ptr;
	t_list	*n;
	t_list	*n1;
	t_list	*n2;
	t_list	*r;
	int		c;

	head = NULL;
	node = 10;
	node1 = 20;
	node2 = 30;
	n = ft_lstnew(&node);
	ft_lstadd_front(&head, n);
	n1 = ft_lstnew(&node1);
	ft_lstadd_front(&head, n1);
	n2 = ft_lstnew(&node2);
	ft_lstadd_back(&head, n2);
	r = ft_lstlast(head);
	printf("last node:%d\n", *(int *)r->content);
	c = ft_lstsize(head);
	printf("size:%d\n" ,c);
	ptr = head;
	while(ptr != NULL)
	{
		printf("le:%d\n" ,*(int*)ptr->content);
		ptr = ptr->next;
	}
	ft_lstiter(&head ,tober);
	ptr = head;
	while (ptr != NULL)
	{
		printf("after: %d\n" ,*(int*)ptr->content);
		ptr = ptr->next;
	}
}

*/

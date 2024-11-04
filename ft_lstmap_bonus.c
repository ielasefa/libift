/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:35:34 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/03 18:02:06 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*double_value(void *content)
{
	int	*new_value;

	new_value = malloc(sizeof(int));
	if (!new_value)
		return (NULL);
	*new_value = (*(int *)content) * 2;
	return (new_value);
}

void	free_content(void *content)
{
	free(content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;
	t_list	*tmp;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	tmp = lst;
	while (tmp)
	{
		content = f(tmp->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		tmp = tmp->next;
	}
	return (new_list);
}
/*
int	main(void) {
	t_list *list = NULL;
	t_list *mapped_list; // Declare mapped_list
	int values[] = {1, 2, 3, 4, 5};
	int i;

	// Create a linked list with the sample values
	for (i = 0; i < 5; i++) {
		int *value = malloc(sizeof(int));
		if (!value) {
			// Handle memory allocation failure
			ft_lstclear(&list, free_content);
			return (1);
		}
		*value = values[i];
		ft_lstadd_back(&list, ft_lstnew(value));
	}

	// Apply ft_lstmap to double the values
	mapped_list = ft_lstmap(list, double_value, free_content);

	// Print the mapped list
	t_list *current = mapped_list;
	while (current) {
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}

	// Clear the original list and the mapped list
	ft_lstclear(&list, free_content);
	ft_lstclear(&mapped_list, free_content);

	return (0);
}*/

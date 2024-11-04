/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:19:37 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/03 17:43:28 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
int	main(void)
{
	t_list *lst = NULL;

	t_list *node1 = ft_lstnew("Salam");
	t_list *node2 = ft_lstnew("CV");
	t_list *node3 = ft_lstnew("Labass");

	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	printf("Content dyal lista:\n");
	ft_lstiter(lst, print_content);

	while (lst)
	{
		t_list *temp = lst->next;
		free(lst);
		lst = temp;
	}

	return (0);
}*/

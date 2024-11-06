/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:12:07 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/05 23:42:01 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		current = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = current;
	}
}
/*
 int main()
 {
	t_list *list = NULL;

	list = ft_lstnew(ft_strdup("node 1"));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("node 2")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("node 3")));
	ft_lstclear(&list, del);
	printf("List after clear: %p\n", (void *)list);
	return (0);
 }*/

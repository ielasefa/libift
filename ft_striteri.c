/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:07:59 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/05 23:46:56 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	lower(unsigned int index, char *s)
{
	if(*s >= 'a' && *s <= 'z')
		*s -= 32;
}
int	main(void) {
	char s[] = "ilyas";
	ft_striteri(s, lower);

	printf("%s\n", s);
	return (0);
}*/

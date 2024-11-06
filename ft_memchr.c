/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:43:43 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/05 23:43:07 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*s1 = s;
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

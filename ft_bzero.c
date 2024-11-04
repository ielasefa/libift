/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:42:51 by iel-asef          #+#    #+#             */
/*   Updated: 2024/10/25 10:06:06 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	ft_memset(ptr, 0, n);
}
/*
int	main(void)
{
	char s[21] = "ilyas";
	size_t n = 2;
	size_t i = 0;
	while( i < n)
	{
	ft_bzero(s , n);
	printf("%d\n" ,s[i]);
	i++;
	}
}*/

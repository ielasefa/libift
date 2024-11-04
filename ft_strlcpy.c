/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:40:12 by iel-asef          #+#    #+#             */
/*   Updated: 2024/10/30 00:38:04 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (len_src);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
	{
		dst[i] = '\0';
	}
	return (len_src);
}
/*
#include <stdio.h>


int	main(void) {
	char src[] = "ilyass elasefar";
	char dst[25];

	size_t len = ft_strlcpy(dst, src, sizeof(dst));

	printf(" %s\n", dst);
	printf(" %zu\n", len);

	return (0);
}*/

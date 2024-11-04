/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:24:50 by iel-asef          #+#    #+#             */
/*   Updated: 2024/10/30 00:01:57 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;

	size_t len_s, (len_d);
	int i, (j);
	len_d = ft_strlen(s1);
	len_s = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (len_s + len_d + 1));
	if (!dst)
		return (NULL);
	if (!s1 && !s2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		dst[i++] = s2[j++];
	dst[i] = '\0';
	return (dst);
}

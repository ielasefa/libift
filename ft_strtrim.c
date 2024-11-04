/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:27:51 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/04 17:00:52 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;

	size_t i, (len_m), (len), (j);
	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1) - 1;
	while (len > i && ft_strchr(set, s1[len]))
		len--;
	len_m = len - i + 1;
	dst = (char *)malloc(sizeof(char) * (len_m + 1));
	if (!dst)
		return (NULL);
	j = 0;
	while (j < len_m)
	{
		dst[j++] = s1[i++];
	}
	dst[j] = '\0';
	return (dst);
}

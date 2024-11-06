/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:50:07 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/05 23:50:15 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		i;
	int		j;

	j = ft_strlen(s);
	dst = (char *)malloc(sizeof(char) * j + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < j)
	{
		dst[i] = (*f)(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
 char lower(unsigned int index, char s)
 {
		if(s >= 'a' && s <= 'z')
			s -= 32;
		return (s);
 }
 int main() {
		char const s[] = "ilyas";
		printf("%s\n", ft_strmapi(s ,lower));
		return (0);
 }*/

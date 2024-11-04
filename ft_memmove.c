/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:12:57 by iel-asef          #+#    #+#             */
/*   Updated: 2024/10/25 11:09:35 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;
	size_t		i;

	s = src;
	d = dst;
	if (d == s || len == 0)
		return (dst);
	if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		i = len;
		while (i-- > 0)
			d[i] = s[i];
	}
	return (dst);
}
/*int	main(void) {

	char overlap[11] = "1234567890";
	ft_memmove(overlap + 2, overlap, 8);
	for (int i = 0; i < 10; i++)
	{
		printf("index %d, n= %c\n", i, overlap[i]);
	}
	printf("%s\n", memmove(overlap + 2, overlap, 8));
	}
*/

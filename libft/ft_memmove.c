/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:13:35 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/11 07:57:57 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmp;
	const unsigned char	*stmp;
	size_t				i;

	tmp = (unsigned char *)dst;
	stmp = (const unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		ft_memcpy(tmp, stmp, len);
	}
	else
	{
		while (0 < len)
		{
			tmp[len - 1] = stmp[len - 1];
			len--;
		}
	}
	return (dst);
}
/*
int	main (void)
{
	char	*src;
	char	*dst;

	src = malloc(100);
	for (int i = 0; i < 100; i++)
		src[i] = i;
	dst = malloc(100);
	printf("ft_memmoveの結果:%p\n",ft_memmove(dst, dst + 21, 50));
}
*/

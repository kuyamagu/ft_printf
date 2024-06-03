/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:41:21 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/20 19:10:45 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp;
	const unsigned char	*s;
	size_t				i;

	tmp = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		tmp[i] = s[i];
		i++;
	}
	return (dst);
}

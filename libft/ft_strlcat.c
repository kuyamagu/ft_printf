/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:54:03 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/29 19:03:25 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	src_len = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

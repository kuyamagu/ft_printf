/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:20:10 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/29 22:05:24 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;
	size_t			i;

	s1_tmp = (unsigned char *)s1;
	s2_tmp = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (s1_tmp[i] == s2_tmp[i] && i < n - 1)
		i++;
	return (s1_tmp[i] - s2_tmp[i]);
}
/*
int main (void)
{
	size_t	size;
	char	*b1;
	size_t	size1;
	char	*b11;

	size = 10;
	b1 = malloc(size);
	printf ("ft%d\n",ft_memcmp(b1, ".........", size));
	size1 = 10;
	b11 = malloc(size);
	printf("kekka%d\n",memcmp(b11, ".........", size1));
}
*/

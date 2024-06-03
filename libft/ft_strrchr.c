/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:11:47 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/29 22:41:11 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_tmp;
	char	c_str;
	int		i;

	s_tmp = (char *)s;
	c_str = (char)c;
	i = 0;
	while (s_tmp[i] != '\0')
		i++;
	if (c_str == '\0')
		return (s_tmp + i);
	while (0 <= i)
	{
		if (s_tmp[i] == c_str)
			return (s_tmp + i);
		i--;
	}
	return (NULL);
}

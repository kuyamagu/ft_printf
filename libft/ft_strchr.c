/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:33:21 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/12 20:22:52 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_tmp;
	char	c_tmp;
	int		i;

	s_tmp = (char *) s;
	c_tmp = (char) c;
	i = 0;
	while (s_tmp[i] && s_tmp[i] != c_tmp)
		i++;
	if (s_tmp[i] == c_tmp)
		return (s_tmp + i);
	return (NULL);
}
/*
int	main (void)
{
	char	*s;
	char	*ss;

	s = "asdfgh";
	ss = "asdfgh";
	printf("結果:%s\n",strchr(s, 300));
	printf("結果:%s\n",ft_strchr(ss, 300));
}
*/

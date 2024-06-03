/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:47:08 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/06 21:44:25 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len_s1;
	int		len_s2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = malloc(len_s1 + len_s2 + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, len_s1 + 1);
	i = 0;
	while (result[i])
		i++;
	ft_strlcpy(result + i, s2, len_s2 + 1);
	return (result);
}
/*
int	main (void)
{
	printf("kekka:%s\n",ft_strjoin("Hello","World"));
}
*/

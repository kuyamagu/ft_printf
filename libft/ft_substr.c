/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:11:26 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/12 16:06:35 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size;
	char			*result;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
	{
		result = malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	if (len > ft_strlen(s + start))
		size = ft_strlen(s + start);
	else
		size = len;
	result = malloc(size + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s + start, size + 1);
	return (result);
}
/*
int	main(void)
{
	char	*s;

	s = "abcdeabcde";
	printf("kekka:%s\n",ft_substr(s,15,100));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:47:18 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/11 07:53:28 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	len_needle = (size_t)ft_strlen(needle);
	if (len == 0)
		return (NULL);
	while (haystack[i] != '\0' && i + len_needle <= len)
	{
		if (haystack[i] == needle[0] && ft_strncmp(&haystack[i], needle,
				len_needle) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	char	*hay;
	char	*needl;
	size_t	len;
	char	*h;
	char	*n;
	size_t	len;
	char	*h1;
	char	*n1;
	size_t	len1;

	hay = "hello";
	needl = NULL;
	len = 100;
	printf("%s\n", ft_strnstr(NULL, "fake", 3));
	h = "libft-test-tokyo";
	n = "tokyo";
	len = 16;
	printf("kekka:%s\n",strnstr(h,n,len));
	printf("Pointakekka:%p\n",strnstr(h,n,len));
	h1 = "libft-test-tokyo";
	n1 = "tokyo";
	len1 = 16;
	printf("ft_strnstr:%s\n",ft_strnstr(h1,n1,len1));
	printf("Pointaft_strnstr:%p\n",ft_strnstr(h1,n1,len1));
}
*/

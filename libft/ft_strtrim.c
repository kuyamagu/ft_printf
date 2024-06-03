/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:27:53 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/11 07:52:02 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	result = malloc(sizeof(char) * (end - start + 1 + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1 + start, end - start + 1 + 1);
	return (result);
}
/*
int	main(void)
{
	const char	*set = "Hello \t  Please\n Trim me !";
	char		*ret;

	const char	*s1 = "\t   \n\n\n  \n\n\t    Hello \t  Please\n
	Trim me !\t\t\t\n  \t\t\t\t  ";
	//const char	*set = "\t\n ";
//	const char *s1 = "aahhjjKKaahhjj";
//	const char	*set = "ahj";
	ret = ft_strtrim(s1, set);
	printf("size: %zu\n", ft_strlen(ret));
	//printf("kekka:%s",ft_strtrim(s1, set));
}
*/

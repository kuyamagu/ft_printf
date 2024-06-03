/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:02:48 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/12 16:45:52 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static int	count_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	**all_free(char **result, int words_num)
{
	while (0 < words_num--)
		free(result[words_num]);
	free(result);
	return (NULL);
}

static char	**make_word(char **result, char const *s, char c)
{
	int	len;
	int	i;
	int	words_num;

	len = 0;
	words_num = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			len = count_len(s + i, c);
			result[words_num] = (char *)malloc(sizeof(char) * (len + 1));
			if (result[words_num] == NULL)
				return (all_free(result, words_num));
			ft_strlcpy(result[words_num], s + i, len + 1);
			words_num++;
			i += len;
		}
		else
			i++;
	}
	result[words_num] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (result == NULL)
		return (NULL);
	result = make_word(result, s, c);
	return (result);
}
/*
int	main(void)
{
	int	i;

//	char *a = "sABC EFGH IJKL P";
//	char c = ' ';
	char** result = ft_split("\0aa\0bbb", '\0');
	i = 0;
	while(result[i])
	{
		printf("kekka%s\n",result[i]);
		i++;
	}
}
*/

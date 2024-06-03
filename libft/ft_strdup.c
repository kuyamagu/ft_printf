/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:44:50 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/29 18:01:57 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		len_s1;

	len_s1 = ft_strlen(s1);
	result = malloc(len_s1 + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, len_s1 + 1);
	return (result);
}

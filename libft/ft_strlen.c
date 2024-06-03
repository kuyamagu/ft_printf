/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:42:37 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/21 19:26:55 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	num;

	num = 0;
	while (s[num] != '\0')
		num++;
	return (num);
}

// int main(void)
// {
// 	char *a = "aiu";
// 	printf("strlen%zd\n",strlen(a));

// 	char *b = "aiu";
// 	printf("ft_strlen%zd\n",ft_strlen(b));
// }

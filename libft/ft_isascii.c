/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:49:08 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/20 16:22:13 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	c = 128;
// 	printf("isasciiの結果；%d\n" ,isascii(c));

// 	int	d = 128;
// 	printf("ft_isasciiの結果；%d\n" ,ft_isascii(d));

// }

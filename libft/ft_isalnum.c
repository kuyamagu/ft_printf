/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:11:35 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/12 20:14:23 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

// int main (void)
// {
// 	int a = 60;
// 	printf("isalnumの結果：%d\n", isalnum(a));
// 	int	b = 60;
// 	printf("ft_isalnumの結果：%d\n", ft_isalnum(b));
// 	int	c = 1;
// 	printf("isalnumの結果：%d\n", isalnum(c));
// 	int	d = 1;
// 	printf("ft_isalnumの結果：%d\n", ft_isalnum(d));
// 	int	e = 0;
// 	printf("isalnumの結果：%d\n", isalnum(e));
// 	int	f = 0;
// 	printf("ft_isalnumの結果：%d\n", ft_isalnum(f));
// }

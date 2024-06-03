/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:54:40 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/12 20:14:14 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main (void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;

	a = 60;
	printf("isdigitの結果：%d\n", isdigit(a));
	b = 60;
	printf("ft_isdigitの結果：%d\n", ft_isdigit(b));
	c = 1;
	printf("isdigitの結果：%d\n", isdigit(c));
	d = 1;
	printf("ft_isdigitの結果：%d\n", ft_isdigit(d));
	e = 0;
	printf("isdigitの結果：%d\n", isdigit(e));
	f = 0;
	printf("ft_isdigitの結果：%d\n", ft_isdigit(f));
}
*/

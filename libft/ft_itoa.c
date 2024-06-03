/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:12:13 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/09 18:50:51 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	int	cnt_digit;

	cnt_digit = 0;
	if (n < 0)
		cnt_digit += 1;
	while (n != 0)
	{
		cnt_digit++;
		n /= 10;
	}
	return (cnt_digit);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		cnt_digit;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	cnt_digit = count_digit(n);
	result = (char *)ft_calloc(1, cnt_digit + 1);
	if (result == NULL)
		return (NULL);
	i = cnt_digit;
	if (n < 0)
	{
		n *= -1;
		result[0] = '-';
	}
	while (n != 0)
	{
		result[--i] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}
/*
int main (void)
{
	int	n;

	n = -1234;
	printf("kekka:%s\n",ft_itoa(n));
}
*/

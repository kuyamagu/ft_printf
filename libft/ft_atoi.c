/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:39:39 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/06 18:08:10 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_judge(long result, const char *str, long sign)
{
	if (result < LONG_MAX / 10)
		return (TRUE);
	else if (result > LONG_MAX / 10)
		return (FALSE);
	else if (sign == 1 && (long)(*str - '0') <= LONG_MAX % 10)
		return (TRUE);
	else if (sign == -1 && (long)(*str - '0') <= (LONG_MIN % 10) * -1)
		return (TRUE);
	return (FALSE);
}

int	ft_atoi(const char *str)
{
	long	sign;
	long	result;

	sign = 1;
	result = 0;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if (sign == 1 && !ft_judge(result, str, sign))
			return ((int)LONG_MAX);
		if (sign == -1 && !ft_judge(result, str, sign))
			return ((int)LONG_MIN);
		result = result * 10 + *str - '0';
		str++;
	}
	return ((int)(result * sign));
}

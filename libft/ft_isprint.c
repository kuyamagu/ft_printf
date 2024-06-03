/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:12:47 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/20 16:22:06 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int a = 0;
// 	while(a <= 178)
// 	{
// 		if (isprint(a) == ft_isprint(a))
// 			printf("ok：%d\n",a);
// 		else
// 			printf("NG:%d\n",a);

// 		a++;
// 	}
// }

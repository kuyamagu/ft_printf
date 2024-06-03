/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:46:31 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/29 17:43:55 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*result;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	total_size = count * size;
	result = malloc(total_size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, total_size);
	return (result);
}

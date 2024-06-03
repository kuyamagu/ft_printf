/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 03:28:21 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/12 21:48:11 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_lst;

	if (!new)
		return ;
	if (lst)
	{
		if (*lst)
		{
			last_lst = ft_lstlast(*lst);
			last_lst->next = new;
		}
		else
			*lst = new;
	}
}

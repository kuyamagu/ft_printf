/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 05:10:00 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/12 20:18:29 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_lst;
	t_list	*tmp_next;

	if (!lst || !del)
		return ;
	tmp_lst = *lst;
	while (tmp_lst)
	{
		tmp_next = tmp_lst->next;
		del(tmp_lst->content);
		free(tmp_lst);
		tmp_lst = tmp_next;
	}
	*lst = NULL;
}

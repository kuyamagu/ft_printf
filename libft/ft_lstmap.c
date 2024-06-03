/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 05:56:21 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/12 16:38:26 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_clear(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return (NULL);
	ft_lstclear(&lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new_node;
	void	*tmp_new;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		tmp_new = f(lst->content);
		if (tmp_new == NULL)
			return (ft_clear(result, del));
		new_node = ft_lstnew(tmp_new);
		if (new_node == NULL)
			return (free(tmp_new), ft_clear(result, del));
		ft_lstadd_back(&result, new_node);
		lst = lst->next;
	}
	return (result);
}

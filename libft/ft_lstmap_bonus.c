/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:44:19 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/07 19:15:08 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_one;
	void	*setup;

	if (!del || !f || !lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		setup = f(lst->content);
		new_one = ft_lstnew(setup);
		if (!new_one)
		{
			del(setup);
			ft_lstclear(&new_lst, (*del));
			return (new_lst);
		}
		ft_lstadd_back(&new_lst, new_one);
		lst = lst->next;
	}
	return (new_lst);
}

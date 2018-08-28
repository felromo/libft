/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 19:26:33 by fromo             #+#    #+#             */
/*   Updated: 2018/08/27 19:26:34 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*body;

	if (!lst || !f)
		return (NULL);
	body = f(lst);
	head = body;
	while (lst)
	{
		head->next = f(lst);
		head = head->next;
		lst = lst->next;
	}
	return (body);
}

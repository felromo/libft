/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 19:26:33 by fromo             #+#    #+#             */
/*   Updated: 2018/08/28 01:04:37 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*body;

	if (!lst || !f)
		return (NULL);
	body = f(lst);
	head = body;
	while ((lst = lst->next))
	{
		/* head->next = f(lst); */
		/* head = head->next; */
		head = (head->next = f(lst)) ? head->next : NULL;
	}
	return (body);
}

/* t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem)) */
/* { */
/* 	t_list	*head; */
/* 	t_list	*body; */
/*  */
/* 	if (!lst || !f) */
/* 		return (NULL); */
/* 	body = f(lst); */
/* 	head = body; */
/* 	while (1) */
/* 	{ */
/* 		head->next = f(lst); */
/* 		head = head->next; */
/* 		lst = lst->next; */
/* 		if (!lst) */
/* 			break ; */
/* 	} */
/* 	return (body); */
/* } */

/* t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem)) */
/* { */
/* 	t_list	*head; */
/* 	t_list	*body; */
/*  */
/* 	if (!lst || !f) */
/* 		return (NULL); */
/* 	body = ft_memalloc(sizeof(t_list)); */
/* 	head = body; */
/* 	while (lst) */
/* 	{ */
/* 		head = f(lst); */
/* 		head = head->next; */
/* 		lst = lst->next; */
/* 	} */
/* 	return (body); */
/* } */

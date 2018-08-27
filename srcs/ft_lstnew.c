#include <stdlib.h>
#include <libft.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lst;  
	/* if ((lst = (t_list *)malloc(sizeof(t_list))) == NULL) */
	/* 	return (NULL); */
	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	t_list tmp;
	lst = &tmp;
	lst->content = (void *)content;
	lst->content_size = lst->content ? content_size : 0;
	lst->next = NULL;
	return (lst);
}

/* t_list  *ft_lstnew(void const *content, size_t content_size) */
/* { */
/* 	t_list	*tmp; */
/* 	void *cont = (void *)content; */
/* 	size_t size = content_size; */
/*  */
/* 	if ((tmp = (t_list *)malloc(sizeof(t_list)))) */
/* 	{ */
/* 		tmp = */
/* 		tmp->content = (content != NULL) ? cont : NULL; */
/* 		tmp->content_size = (content != NULL) ? size : 0; */
/* 		tmp->next = NULL; */
/* 	} */
/* 	return (tmp); */
/* } */

/*
t_list  *ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;
	void *cont = (void *)content;
	size_t size = content_size;

	if ((tmp = (t_list *)malloc(sizeof(t_list))))
	{
		tmp->content = (content != NULL) ? cont : NULL;
		tmp->content_size = (content != NULL) ? size : 0;
		tmp->next = NULL;
	}
	return (tmp);
}
*/

/*
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lst = (t_list *)malloc(sizeof(t_list));
	if (lst)
	{
		lst->content = (void *)content;
		lst->content_size = lst->content ? content_size : 0;
		lst->next = NULL;
	}
	return (lst);
}
*/

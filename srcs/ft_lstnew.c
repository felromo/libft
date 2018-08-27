#include <stdlib.h>
#include <libft.h>

t_list  *ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if ((lst = (t_list *)malloc(sizeof(t_list) * content_size)))
	{
		content ?
      ((lst->content = (void *)malloc(content_size)) ?
       ft_memcpy(lst->content, content, content_size) :
       NULL) :
      NULL;
		lst->content_size = lst->content ? content_size : 0;
		lst->next = NULL;
	}
	return (lst);
}

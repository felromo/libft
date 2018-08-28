#include <libft.h>

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
  t_list	*head;
  t_list	*body;

  if (!lst || !f)
    return (NULL);
  body = f(lst);
  head = body;
  while (lst)
    {
      head = (head->next = f(lst));
      lst = lst->next;
    }
  return (body);
}

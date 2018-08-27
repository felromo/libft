#include <libft.h>

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
  t_list *lst;

  if (alst && del)
    {
      while (*alst)
        {
          lst = (*alst)->next;
          del((*alst)->content, (*alst)->content_size);
          ft_memdel((void **)alst);
          *alst = lst;
        }
      *alst = NULL;
    }
}

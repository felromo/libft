#include <libft.h>

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
  t_list *lst;

  while (del && *alst)
    {
      lst = (*alst)->next;
      ft_lstdelone(alst, del);
      *alst = lst;
    }
  *alst = NULL;
}

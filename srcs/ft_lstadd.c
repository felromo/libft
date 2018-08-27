#include <libft.h>

void ft_lstadd(t_list **alst, t_list *new)
{
  t_list *body;

  body = *alst;
  *alst = new;
  (*alst)->next = body;
}

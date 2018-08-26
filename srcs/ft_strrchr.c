#include <string.h>
#include <libft.h>

char *ft_strrchr(const char *s, int c)
{
  int len;

  len = ft_strlen(s);
  while (len)
    {
      if (s[len] == (char) c)
        return ((char *)&(s[len]));
      len--;
    }
  if (!c)
    return ((char *)&(s[len]));
  return (NULL);
}

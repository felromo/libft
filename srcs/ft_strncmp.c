#include <string.h>
#include <libft.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  while (n-- && (unsigned char)*s1 == (unsigned char)*s2)
    {
      if (!*s1)
        break;
      s1++;
      s2++;
    }
  return ((unsigned char)*s1 - (unsigned char)*s2);
}

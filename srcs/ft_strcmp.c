#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
  while ((unsigned char)*s1 == (unsigned char)*s2)
    {
      if (!*s1)
        break;
      s1++;
      s2++;
    }
  return ((unsigned char)*s1 - (unsigned char)*s2);
}

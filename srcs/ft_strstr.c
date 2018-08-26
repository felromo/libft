#include <string.h>

char *ft_strstr(const char *haystack, const char *needle)
{
  char *cmp;
  char *tmp;

  if (!*needle)
    return (char *)haystack;
  if (needle == haystack)
    return ((char *)haystack);
  while (*haystack)
    {
      cmp = (char *)haystack;
      tmp = (char *)needle;
      while (*tmp && *cmp == *tmp)
        {
          cmp++;
          tmp++;
        }
      if (!*tmp) return (char *)haystack;
      haystack++;
    }
  return (NULL);
}

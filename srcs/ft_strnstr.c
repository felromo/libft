#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  char *cmp;
  char *tmp;
  int ltmp;
  int i;

  i = 0;
  if (!*needle || haystack == needle)
    return (char *)haystack;
  while ((len - i) && *haystack)
    {
      cmp = (char *)haystack;
      tmp = (char *)needle;
      ltmp = len;
      while (ltmp && *tmp && *cmp == *tmp)
        {
          cmp++;
          tmp++;
          ltmp--;
        }
      if (ltmp > 0 && !*tmp) return (char *)haystack;
      haystack++;
      i++;
    }
  return (NULL);
}

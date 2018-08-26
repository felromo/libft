#include <string.h>
#include <libft.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  char *d = dst;
  const char *s = src;
  size_t n = dstsize;
  size_t dlen;

  while (n-- != 0 && *d != '\0')
    d++;
  dlen = d - dst;
  n = dstsize - dlen;

  if (n == 0)
    return (dlen + ft_strlen(s));

  while (*s != '\0')
    {
      if (n != 1)
        {
          *d++ = *s;
          n--;
        }
      s++;
    }
  *d = '\0';
  return (dlen + (s - src));
}

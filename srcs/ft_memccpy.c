#include <string.h>

void  *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
  unsigned char delimeter = c;
  while (n-- > 0)
    {
      if (*((char *)src) == delimeter)
        break;
    }
  return dst;
}

#include <libft.h>

void  *memcpy(void *restrict dst, const void *restrict src, size_t n)
{
  while (n-- > 0)
    {
      *dst++ = *src++;
    }
}

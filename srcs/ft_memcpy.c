#include <string.h>

void  *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
  while (n-- > 0)
    *(char *)dst++ = *(char *)src++;
  return dst;
}

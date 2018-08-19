#include <string.h>

void  *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*tmp;
	tmp = dst;
	while (n--)
		*tmp++ = *(char *)src++;
  return (dst);
}

#include <string.h>

void  *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char delimeter = c;
	while (n-- > 0)
	{
		*(unsigned char *)dst++ = *(unsigned char *)src;
		if (*((unsigned char *)src) == delimeter)
			return ((unsigned char *)dst);
		src++;
	}
	return NULL;
}

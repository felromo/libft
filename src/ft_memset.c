#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = ((unsigned char *) b);
	while (*tmp && len > 0)
	{
		*tmp++ = (unsigned char)c;
		len--;
	}

	return (b);
}
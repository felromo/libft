#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char tmp[len];

	if (dst >= src && dst <= (src + len))
	{
		ft_memcpy(tmp, (char *)src, len);
		ft_memcpy((char *)dst, tmp, len);
	}
	else
		ft_memcpy((char *)dst, (char *)src, len);

	return (dst);
}

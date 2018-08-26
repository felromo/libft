#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
  char *tmpdst = (char *)dst;
  char *tmpsrc = (char *)src;
  size_t i = 0;

	if (dst >= src)
    while (len--)
      tmpdst[len] = tmpsrc[len];
	else
    while (i++ < len)
      tmpdst[i - 1] = tmpsrc[i - 1];
	return (dst);
}

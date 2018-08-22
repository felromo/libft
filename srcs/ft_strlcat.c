#include <string.h>
#include <libft.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    char    *tmp;
    int     test;

    test = dstsize - (ft_strlen(dst) + 1);
    tmp = dst;
    while(*tmp++);
    // while (dstsize-- && --*tmp && (*tmp++ = *src++));
    while (test-- > 0 && (*(tmp++ - 1) = *src++));
    return (ft_strlen(dst));
}
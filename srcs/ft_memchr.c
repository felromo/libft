#include <stdlib.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    int i;

    i = 0;
    while (n--)
    {
        if ((unsigned char)c == ((unsigned char *)s)[i])
            return ((void *)s + i);
        i++;
    }
    return (NULL);
}
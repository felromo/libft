#include <stdlib.h>

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
    int i;

    i = 0;
    while (len--)
    {
        if (*src)
        {
            dst[i] = *src++;
        }
        else
        {
            dst[i] = '\0';
        }
        i++;
    }
    return (dst);
}
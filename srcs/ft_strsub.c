#include <stdlib.h>

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *buf;
    int     i;

    buf = (char *)malloc(sizeof(char) * (len + 1));
    i = 0;
    if (buf)
    {
        while (len-- && s[start])
        {
            buf[i] = s[start];
            i++;
            start++;
        }
        buf[i] = '\0';
    }
    return (buf);
}
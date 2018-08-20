#include <stdlib.h>
#include <libft.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *buf;
    int     l1;
    int     l2;
    int     i;

    l1 = ft_strlen(s1);
    l2 = ft_strlen(s2);
    i = 0;
    buf = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
    if (buf)
    {
        while (*s1)
        {
            *buf++ = *s1++;
        }
        while (*s2)
        {
            *buf++ = *s2++;
        }
        *buf = '\0';
        return (buf - (l1 + l2));
    }
    return (buf);
}
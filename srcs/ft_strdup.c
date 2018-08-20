#include <libft.h>

char    *ft_strdup(const char *s1)
{
    char *buf;
    int i;

    buf = ft_strnew(ft_strlen(s1));
    if (buf)
    {
        i = 0;
        while (s1[i])
        {
            buf[i] = s1[i];
            i++;
        }
    }
    return (buf);
}
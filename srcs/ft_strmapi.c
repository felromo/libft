#include <stdlib.h>
#include <libft.h>


char    *ft_strmapi(char const *s, char (*f)(unsigned int, char ))
{
    int     outside_index;
    int     len;
    char    *buf;

    outside_index = 0;
    len = ft_strlen(s);
    buf = (char *)malloc(sizeof(char) * (len + 1));
    if (buf)
    {
        while (s[outside_index])
        {
            buf[outside_index] = (*f)(outside_index, s[outside_index]);
            outside_index++;
        }
        buf[outside_index] = '\0';
    }
    return (buf);
}
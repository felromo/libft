#include <stdlib.h>
#include <libft.h>

char    *ft_strtrim(char const *s)
{
    int     start;
    int     end;
    int     len;
    char    *str;
    char    *buf;

    start = 0;
    end = 0; 
    len = ft_strlen(s);
    while (ft_iswhitespace(s[start++]));
    str = (char *)s + (ft_strlen(s) - 1);
    while (ft_iswhitespace(*str--))
        end++;
    buf = ft_strsub(s, start - 1, (len - ((start - 1) + (end))));
    return (--start == len ? "" : buf);
}
#include <ctype.h>
#include <stdio.h>
#include <libft.h>

int     ft_isalnum(int c)
{
    return (is_digit(c) || is_alpha(c));
}

// int     main(void)
// {
//     return (0);
// }
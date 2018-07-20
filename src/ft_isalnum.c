#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int     ft_isalnum(int c)
{
    return (ft_isdigit(c) || ft_isalpha(c));
}

// int     main(void)
// {
//     return (0);
// }

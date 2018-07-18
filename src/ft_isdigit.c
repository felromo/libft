#include <stdio.h>
#include <ctype.h>

int     ft_isdigit(int c)
{
    return (c >= 48 && c <= 57);
}

// int     main(void)
// {
//     printf("ft_isdigit: %c = %d\n", 48, ft_isdigit(48));
//     printf("isdigit: %c = %d\n", 48, isdigit(48));

//     printf("ft_isdigit: %c = %d\n", 47, ft_isdigit(47));
//     printf("isdigit: %c = %d\n", 47, isdigit(47));

//     printf("ft_isdigit: %c = %d\n", 49, ft_isdigit(49));
//     printf("isdigit: %c = %d\n", 49, isdigit(49));
//     return (0);
// }
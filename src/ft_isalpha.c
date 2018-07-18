#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
  /* if ((c >= 65 && c <= 90) || (c >=97 && c <= 122)) */
  return ((c >= 65 && c <= 90) || (c >=97 && c <= 122));
}
// int main(void)
// {
//   printf("%c ft_isalpha: %d\n", 65, ft_isalpha(65));
//   printf("%c isalpha: %d\n", 65, isalpha(65));

//   printf("%c ft_isalpha: %d\n", 66, ft_isalpha(66));
//   printf("%c isalpha: %d\n", 66, isalpha(66));

//   printf("%c ft_isalpha: %d\n", 94, ft_isalpha(94));
//   printf("%c isalpha: %d\n", 94, isalpha(94));

//   printf("%c ft_isalpha: %d\n", 1, ft_isalpha(1));
//   printf("%c isalpha: %d\n", 1, isalpha(1));

//   printf("%c ft_isalpha: %d\n", 10, ft_isalpha(10));
//   printf("%c isalpha: %d\n", 10, isalpha(10));

//   return (0);
// }

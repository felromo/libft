#include <libft.h>

int ft_atoi(const char *str)
{
  int sign;
  int product;

  product = 0;
  /* while ((*str <= 13 && *str >= 9) || *str == 32) */
  while (ft_iswhitespace(*str))
    str++;
  sign = (*str == '-');
  str += (*str == '+' || *str == '-') ? 1 : 0;
  while (ft_isdigit(*str))
    {
      product *= 10;
      product += (int)*str++ - 48;
    }
  return (sign ? product * -1 : product);

}

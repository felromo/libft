#include <libft.h>
#include <stdlib.h>
#include <stdio.h>

/* static char		*int_is_upperb(void) */
/* { */
/* 	char *res; */

/* 	res = ft_strnew(11); */
/* 	if (res != NULL) */
/* 		res = ft_strcpy(res, "-2147483648"); */
/* 	return (res); */
/* } */

static char		*my_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = (int)(ft_strlen(str) - 1);
	if (str[0] == '-')
		i++;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

static char		*get_string(char *res, int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		res[i] = '-';
		n = n * (-1);
		i++;
	}
	while (n != 0)
	{
		res[i] = (char)(n % 10 + '0');
		i++;
		n = n / 10;
	}
	res[i] = '\0';
	res = my_strrev(res);
	return (res);
}

char			*ft_itoa(int n)
{
	char *res;

  if (!n && (res = ft_strnew(1)))
    res = "0";
	else if (n == -2147483648 && (res = ft_strnew(11)))
    res = ft_strcpy(res, "-2147483648");
	else
      if ((res = ft_strnew(ft_num_len(n) + 1)))
        res = get_string(res, n);
  return (res);
}

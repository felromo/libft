#include <libft.h>
#include <stdlib.h>

static char	*get_string(char *res, int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		res[i] = '-';
		n = n * (-1);
		i++;
	}
	while (n)
	{
		res[i] = (char)(n % 10 + '0');
		i++;
		n = n / 10;
	}
	res[i] = '\0';
	res = ft_strrev(res);
	return (res);
}

char		*ft_itoa(int n)
{
	char	*buf;

	if (!n && (buf = "0"))
		;
	else if (n == -2147483648
			&& (buf = ft_strcpy(ft_strnew(11), "-2147483648")))
		;
	else
	{
		if ((buf = ft_strnew(ft_num_len(n) + 1))
				&& (buf = get_string(buf, n)))
			;
	}
	return (buf);
}

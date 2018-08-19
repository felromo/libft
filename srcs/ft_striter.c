#include <libft.h>

void	ft_striter(char *s, void (*f)(char *))
{
	int len;
	/* int i; */

	len = ft_strlen(s);
	/* i = 0; */
	while (len-- > 0)
	{
		(*f)(s++);
	}
}

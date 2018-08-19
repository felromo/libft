#include <libft.h>

void	ft_strclr(char *s)
{
	int len;

	len = ft_strlen(s);
	ft_bzero(s, len);
}

#include <libft.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_itoa_old(int n)
{
	int len;
	char *toa;

	// some_method = number -> number of place values
	len = ft_num_len(n);

	// turn int n into an alpha representation
	toa = (char *)malloc((sizeof(char) * len) + 1);
	if (toa)
	{

		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	if ((toa = (char *)malloc(sizeof(char) + 1)))
	{
		char *head = toa;
		*toa = (n + '0');
		toa++;
		*toa = '\0';
		return (head);
	}
	return (NULL);
}

char	*ft_itoa(int n)
{
	char	*buf;
	int		size;
	int		len;
	int		i;

	len = ft_num_len(n);
	size = (sizeof(char) * len);
	buf = (char *)malloc(size + 1);
	if (buf)
	{
		i = 0;
		while (i < len)
		{
			// this line here needs to change
			buf[i] = n + '0';
			i++;
		}
		buf[i] = '\0';
		return (buf);
	}
	return (NULL);

}

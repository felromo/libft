#include <stdlib.h>

char    *ft_itoa(int n)
{
    
	char *toa;

	// turn int n into an alpha representation
	toa = (char *)malloc(sizeof(char) + 1);
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

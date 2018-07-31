#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *p1;
	
	if ((p1 = malloc(size)) == NULL)
		return (NULL);
	// return *((unsigned char *)p1) ? ft_bzero(p1, size) : p1;
	ft_bzero(p1, size);
	return (p1);
	//bzero(p1, size);
	//return (p1);
}

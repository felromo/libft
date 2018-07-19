#include <string.h>
#include <stdlib.h>

/*
void	*ft_memalloc(size_t size)
{

	return (void *) malloc(size);
}
*/

void	*ft_memalloc(size_t size)
{
	void *p1 = malloc(size * sizeof(void));
	return (p1);
}


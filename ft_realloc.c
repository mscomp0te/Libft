#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*ptr_new;

	if (!(ptr_new = malloc(size)))
		return (NULL);
	ft_memcpy(ptr_new, ptr, size);
	free(ptr);
	return(ptr_new);
}
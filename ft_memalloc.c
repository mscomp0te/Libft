#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*res;

	if (size + 1 < size || !size || !(res = (void *)malloc(size)))
		return (NULL);
	ft_bzero(res, size);
	return (res);
}
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;

	if (size + 1 < size || !(res = (char *)malloc(size + 1)))
		return (NULL);
	ft_memset(res, (int)'\0', size);
	res[size] = '\0';
	return (res);
}
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (i < n)
	{
		if (source[i] == (unsigned char)c)
			return (dst + i + 1);
		dest[i] = source[i];
		i++;
	}
	return (NULL);
}
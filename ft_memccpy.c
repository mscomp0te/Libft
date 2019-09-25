#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	if (!n || dst == src)
		return (NULL);
	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (i < n && dest[i])
	{
		if (source[i] == (unsigned char)c)
			return (dst + i + 1);
		dest[i] = source[i];
		i++;
	}
	return (NULL);
}
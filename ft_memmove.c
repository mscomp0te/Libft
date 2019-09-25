#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*tmp;

	if (!len || dst == src)
		return (dst);
	tmp = (unsigned char *)src;
	tmp = ft_memcpy((void *)tmp, src, len);
	dest = ft_memcpy(dst, (const void *)tmp, len);
	return (dst);
}
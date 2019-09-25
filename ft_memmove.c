#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_temp;
	unsigned char	*src_temp;
	unsigned char	*tmp;
	int				i;

	if (!len || dst == src)
		return (NULL);
	i = -1;
	tmp = 0;
	dst_temp = (unsigned char *)dst;
	src_temp = (unsigned char *)src;
	while (src_temp[++i])
		tmp[i] = src_temp[i];
	i = -1;
	while (tmp[++i])
		dst_temp[i] = tmp[i];
	return (dst);
}
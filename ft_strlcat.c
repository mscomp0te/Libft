#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strnlen(dst, size);
	src_len = ft_strlen(src);
	if (dst_len + 1 < dst_len || src_len + 1 < src_len)
		return (dst_len);
	if (size > dst_len)
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
		dst[dst_len + src_len + 1] = '\0';
	}
	else
		ft_memcpy(dst + dst_len, src, size);
	// if (src_len < size - dst_len)
	// {
	// 	ft_memcpy(dst + dst_len, src, src_len + 1);
	// 	dst[dst_len + src_len + 1] = '\0';
	// }
	// else
	// 	ft_memcpy(dst + dst_len, src, size - 1);
	return (dst_len + src_len);
}

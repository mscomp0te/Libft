#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	if (!len || !dst)
		return ((void *)0);
	i = 0;
	while (i < len && dst[i])
	{
		if (!src[i])
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
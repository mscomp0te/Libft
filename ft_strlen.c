#include "libft.h"

	// if (!s)
	// 	return (0);

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

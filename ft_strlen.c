#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}
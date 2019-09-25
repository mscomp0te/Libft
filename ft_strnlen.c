#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	if (!s || !maxlen)
		return (0);
	i = 0;
	while (s[i] && i < maxlen)
		i++;
	return (i);
}
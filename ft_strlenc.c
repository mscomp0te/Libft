#include "libft.h"

size_t	ft_strlenc(const char *s, char c)
{
	size_t	len;
	int		i;

	if (!s)
		return (-1);
	i = 0;
	len = 0;
	while (((char *)s)[i] == c && s[i])
		i++;
	while (((char *)s)[i] != c && s[i] && s[i])
	{
		i++;
		len++;
	}
	return (len);
}
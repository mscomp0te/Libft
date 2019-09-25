#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	while (len)
	{
		if (((char *)s)[len] == (char)c)
			return (&((char *)s)[len]);
		len--;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
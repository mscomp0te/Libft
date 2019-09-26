#include "libft.h"

	// if (!s)
	// 	return (NULL);

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen((char *)s);
	if ((char)c == '\0')
		return ((char *)s + len);
	while (len + 1)
	{
		if (((char *)s)[len] == (char)c)
			return (&((char *)s)[len]);
		len--;
	}
	return (NULL);
}

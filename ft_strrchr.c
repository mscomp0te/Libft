#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen((char *)s);
	while (len)
	{
		if (s[len] == (char)c)
			return (&s[len]);
		len--;
	}
	if ((char)c == '\0')
		return (s);
	return (NULL);
}
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	/*if (!str || !n || !((unsigned char)c))
		return (NULL);*/
	while (n)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
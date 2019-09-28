#include "libft.h"

char	*ft_strrev(const char *s, size_t len)
{
	char	*res;
	size_t	i;

	if (!s || !len || !(res = (char *)malloc(sizeof(*res) * len)))
		return (NULL);
	i = 0;
	len -= 1;
	while (len)
	{
		res[i] = s[len];
		len--;
	}
	res[i] = '\0';
	return (res);
}

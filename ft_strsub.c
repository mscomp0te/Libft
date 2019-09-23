#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	if (!len || len + 1 < len || !(res = (char *)malloc(len + 1)))
		return (NULL);
	i = 0;
	while (s[start + i])
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	if (i > len)
		return (NULL);
	else
		return (res);
}
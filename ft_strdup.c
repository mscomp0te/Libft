#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	i = 0;
	if (size + 1 < size || !(res = (char *)malloc(ft_strlen(s1) + 1)))
		return (NULL);
	res = ft_strcpy(res, s1);
	return (res);
}
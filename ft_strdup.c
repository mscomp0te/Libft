#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;

	if (ft_strlen(s1) + 1 < ft_strlen(s1) ||
		!(res = (char *)malloc(ft_strlen(s1) + 1)))
		return (NULL);
	res = ft_strcpy(res, s1);
	res[ft_strlen(s1) + 1] = '\0';
	return (res);
}

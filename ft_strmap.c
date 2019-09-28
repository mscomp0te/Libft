#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	i = -1;
	if (!s || !f || ft_strlen(s) + 1 < ft_strlen(s) ||
		!(res = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[++i])
		res[i] = f(s[i]);
	res[i] = '\0';
	return (res);
}

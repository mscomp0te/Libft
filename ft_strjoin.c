#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i = 0;

	if (size + 1 < size || !(res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	i = 0;
	while (s1)
	{
		res[i] = *s1;
		i++;
		s1++;
	}
	while (s2)
	{
		res[i] = *s2;
		i++;
		s2++;
	}
	return (res);
}
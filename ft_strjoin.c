#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*res;
	int		i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1_len + 1 < s1_len || s2_len + 1 < s2_len ||
		s1_len + s2_len + 1 < s1_len + s2_len ||
		!(res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
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
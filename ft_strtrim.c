#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		min;
	int		max;
	int		k;

	// if (!s || ft_strlen(s) + 1 < ft_strlen(s) ||
	// 	!(res = (char *)malloc(ft_strlen(s) + 1)))
	// 	return (NULL);
	if (!s)
		return (NULL);
	min = 0;
	max = ft_strlen(s);
	while (s[min] == ' ' || s[min] == '\n' || s[min] == '\t')
		min++;
	while (s[max] == ' ' || s[max] == '\n' || s[max] == '\t')
		max--;
	if (max == min || !(res = (char *)malloc(max - min + 1)))
		return (ft_strnew(1));
	k = 0;
	while (min < max)
	{
		res[k] = s[min];
		min++;
		k++;
	}
	res[k] = '\0';
	return (res);
}
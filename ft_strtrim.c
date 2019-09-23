#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		min;
	int		max;

	if (!s || !(res = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	min = 0;
	max = ft_strlen(s);
	while (s[min] == ' ' || s[min] == '\n' || s[min] == '\t')
		min++;
	while (s[max] == ' ' || s[max] == '\n' || s[max] == '\t')
		max--;
	if (!(res = (char *)malloc(max - min + 1)))
		return (NULL);
	while (min < max)
	{
		res[min] = s[min];
		min++;
	}
	res[min] = '\0';
	return (res);
}
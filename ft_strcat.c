#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*dest;
	int		i;

	i = 0;
	dest = s1 + ft_strlen(s1);
	while (s2[i])
	{
		dest[i] = s2[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
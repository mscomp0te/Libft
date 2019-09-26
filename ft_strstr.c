#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;

	if (!needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		if (!(ft_strncmp(haystack + i, needle, ft_strlen(needle))))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

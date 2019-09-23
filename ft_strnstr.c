#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
{
	size_t	needle_len;
	int		i;

	if (!needle || !len)
		return ((char *)haystack);
	i = 0;
	needle_len = ft_strlen(needle, len);
	while (i < len && haystack[i])
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			return (haystack + i);
		i++;
	}
	return (NULL);
}
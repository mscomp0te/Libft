#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	size_t	j;
	int		k;

	i = 0;
	k = 0;
	if (!s || !(arr = (char **)malloc(sizeof(*arr)
		* (ft_words_num(s, c) + 1))))
		return (NULL);
	while (i < ft_words_num(s, c))
	{
		j = 0;
		while (j < ft_strlenc(s + k, c))
		{
			arr[i][j] = ((char *)s + k)[j];
			j++;
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
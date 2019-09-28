#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		isnegative;
	size_t	i;

	isnegative = 0;
	if (n < 0)
		isnegative = 1;
	if (!(res = (char *)malloc(ft_digits_num(n) + isnegative + 1)))
		return (NULL);
	i = 0;
	if (num == 0)
		res[i++] = '0';
	else
	{
		if (n < 0)
		{
			res[i++] = '-';
			n *= -1;
		}
		
	}
	res[i] = '\0';
	ft_strrev(res);
	return (res);
}

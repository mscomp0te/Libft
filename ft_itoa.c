#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		sign;
	int		num;
	int		i;

	sign = 0;
	num = ft_digits_num(n);
	i = num;
	if (n < 0)
		sign = 1;
	if (!(res = (char *)malloc(num + sign) + 1))
		return (NULL);
	if (sign)
		res[0] = '-';
	i -= 1;
	while (i > sign)
	{
		res[i] = (char)(n % 10 + 48);
		n /= 10;
		i--;
	}
	res[num] = '\0'; 
	return (res);
}
#include "libft.h"
#include "stdio.h"

double	ft_topower(int num, int pow)
{
	double	res;
	int		i;

	if (pow == 0)
		return (-1);
	i = -1;
	res = 1.0;
	if (pow < 0)
	{
		while (++i < pow * (-1))
			res *= (double)num;
		res = 1/res;
	}
	else
		while (++i < pow)
			res *= (double)num;
	return (res);
}

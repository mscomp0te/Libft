#include "libft.h"

// static int	check_overs(int n, int sign)
// {
// 	if (sign == -1)
// 		if ((unsigned long long)n - 1 > MAX_LONG)
// 			return (0);
// 		else
// 			return (n * sign);
// 	else
// 		if ((unsigned long long)n > MAX_LONG)
// 			return (-1);
// 		else
// 			return (n);
// }

// static int	check_overs(int n, int sign)
// {
// 	if (n > MAX_LONG)
// 	{
// 		if (sign == -1)
// 			return (0);
// 		else
// 			return (-1);
// 	}
// 	return (n * sign);
// }

static int	check_overs(int n, int sign)
{
	return (n * sign);
}

int			ft_atoi(const char *str)
{
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	while (*str == '\n' || *str == ' ' || *str == '\f'
				|| *str == '\t' || *str == '\v' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (check_overs(res, sign));
}

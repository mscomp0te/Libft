#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == MIN_INT * -1)
		write(1, "-2147483648", 11);
	else
		if (n < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
}
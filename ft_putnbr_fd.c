#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MAX)
		write(1, "-2147483648", 11);
	else
		if (n < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		while (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar(n % 10 + 48);
}
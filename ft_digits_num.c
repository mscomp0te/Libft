int		ft_digits_num(int n)
{
	int		k;

	k = 0;
	if (n < 0)
		n *= -1;
	while (n > 9)
	{
		n /= 10;
		k++;
	}
	return (k);
}
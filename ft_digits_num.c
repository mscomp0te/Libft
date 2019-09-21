int		ft_digits_num(int n)
{
	int		k;

	k = 0;
	while (n > 9)
	{
		n /= 10;
		k++;
	}
	return (k);
}
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s[i]);
		i++;
	}
}
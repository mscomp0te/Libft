int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
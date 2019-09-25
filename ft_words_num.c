int		ft_words_num(const char *s, char c)
{
	int		count;
	int		i;

	if (!s)
		return (-1);
	i = 0;
	count = 0;
	while (((char *)s)[i])
	{
		while (((char *)s)[i] == c && s[i])
			i++;
		if (((char *)s)[i] != c)
			count++;
		while (((char *)s)[i] != c && s[i])
			i++;
	}
	return (count);
}
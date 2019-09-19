int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n || s1 == s2)
		return (0);
	while (n && s1 && s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (n)
		{
			s1++;
			s2++;
		}
		n--;
	}	
}
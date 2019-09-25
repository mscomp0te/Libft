char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	// if (dst == (char *)src)
	// 	return ((void *)0);
	i = 0;
	while (dst[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
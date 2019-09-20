char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		i;

	i = 0;
	if (!n || dst == src)
		return (NULL);
	while (i < n)
	{
		if (src[i])
			dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
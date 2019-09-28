#include "libft.h"

void	ft_lstzero(t_list **alst)
{
	if (!*alst)
		return ;
	while (*alst)
	{
		(*alst)->content = NULL;
		(*alst)->content_size = 0;
		*alst = (*alst)->next;
	}
}

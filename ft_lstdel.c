#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	while (alst->next)
		ft_lstdelone(alst, del(alst->content, alst->content_size));
}
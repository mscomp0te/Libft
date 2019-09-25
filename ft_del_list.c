#include "libft.h"

void	ft_del_list(t_list	*lst)
{
	t_list	*next;

	if (!lst)
		return ;
	while (lst)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
	lst = NULL;
}
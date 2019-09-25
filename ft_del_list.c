#include "libft.h"

void	ft_del_list(t_list	*lst)
{
	t_list	*tmp;
	t_list	*next;

	if (!lst)
		return ;
	tmp = lst;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
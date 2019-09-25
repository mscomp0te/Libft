#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new_list;

	if (!lst || !f || !(new_list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	tmp = lst;
	while (tmp)
	{
		if (!(new_list = f(tmp)))
		{
			ft_del_list(new_list);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (new_list);
}
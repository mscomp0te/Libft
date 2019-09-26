#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new_list;
	t_list	*begin;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	if (!(new_list = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	begin = new_list;
	while (new_list->next)
	{
		tmp = tmp->next;
		new_list = new_list->next;
		tmp = f(lst);
		if (!(new_list = ft_lstnew(tmp->content, tmp->content_size)))
		{
			ft_del_list(new_list);
			return (NULL);
		}
	}
	return (begin);
}

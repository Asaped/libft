#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	size_t	i;

	i = 0;
	if (!lst || !del)
		return ;
	while (lst[i])
	{
		list = lst[i]->next;
		ft_lstdelone(lst[i], del);
		lst[i] = list;
	}
}

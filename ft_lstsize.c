#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (i);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	i++;
	return (i);
}

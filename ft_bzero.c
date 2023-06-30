#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s && n == 0)
		return ;
	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

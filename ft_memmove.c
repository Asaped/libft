#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if (dest > src)
		while (n-- > 0)
			((char *)dest)[n] = ((char *)src)[n];
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}	
	}
	return (dest);
}
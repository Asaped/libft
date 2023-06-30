#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	const char	*str2;

	if (!src && !dest)
		return (0);
	str = dest;
	str2 = src;
	i = 0;
	while (i < n)
	{
		str[i] = str2[i];
		i++;
	}
	dest = str;
	return (dest);
}

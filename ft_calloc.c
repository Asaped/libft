#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	while (i < nmemb * size)
		str[i++] = 0;
	return (str);
}

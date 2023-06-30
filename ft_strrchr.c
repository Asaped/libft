#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i])
		i++;
	if (str[i] == c)
		return (str + i);
	while (i > 0)
	{
		i--;
		if (str[i] == (char)c)
			return (str + i);
	}
	return (NULL);
}

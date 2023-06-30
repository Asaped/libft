#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str[0] = 0;
		return (str);
	}
	while (s[start] && i < len)
		str[i++] = s[start++];
	str[i] = 0;
	return (str);
}

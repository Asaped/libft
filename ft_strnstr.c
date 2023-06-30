#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if ((!s1 || !s2) && n == 0)
		return (0);
	if (!s2[0])
		return ((char *)s1);
	i = 0;
	j = 0;
	while (s1[i] && i < n && s1[i] != s2[j])
		i++;
	while (s2[j] == s1[i] && i < n && s1[i] && s2[j])
	{
		i++;
		j++;
		if (s1[i] != s2[j] && s2[j])
			j = 0;
		if (!s2[j])
			return ((char *)s1 + (i - j));
	}
	return (NULL);
}

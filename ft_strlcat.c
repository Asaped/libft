#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;

	if ((!dst || !src) && size == 0)
		return (0);
	i = 0;
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (size <= dst_size)
		return (src_size + size);
	if (size > dst_size)
	{
		while (i + dst_size < size - 1 && src[i])
		{
			dst[i + dst_size] = src[i];
			i++;
		}
		dst[i + dst_size] = 0;
	}
	return (dst_size + src_size);
}

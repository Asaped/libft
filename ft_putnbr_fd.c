#include "libft.h"
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		count;
	int		b;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	count = 1;
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	b = n;
	while (b > 0 && count <= 99999999)
	{
		b /= 10;
		count *= 10;
	}
	count *= 10;
	while (count)
	{
		ft_putchar_fd(n / count + 48, fd);
		n %= count;
		count /= 10;
	}
}

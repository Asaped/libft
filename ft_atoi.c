#include "libft.h"

int	ft_atoi(const char *str)
{
	int	neg;
	int	result;

	result = 0;
	neg = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
		neg *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9' && *str)
	{
		result = result * 10;
		result += *str - 48;
		str++;
	}
	return (result * neg);
}

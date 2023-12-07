#include "libft.h"

int	white_space(char str)
{
	return (str == ' ' || (str >= '\t' && str <= '\r'));
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (white_space(str[i]))
		i++;
	if ((str[i] == '-' || str[i] == '+') && (str[i + 1] >= '0' && str[i
			+ 1] <= '9'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sign);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int		val;
	char	str[30];

	strcpy(str, "10");
	val = ft_atoi(str);
	printf("My value = %d\n", val);
	strcpy(str, "10");
	val = atoi(str);
	printf("atoi value = %d\n", val);
	return (0);
}

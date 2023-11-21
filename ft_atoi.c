#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	if (str[i] == '-')
	{
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

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
   int val;
   char str[30];
   
   strcpy(str, "-999999999");
   val = ft_atoi(str);
   printf("My value = %d\n", val);

   strcpy(str, "-999999999");
   val = atoi(str);
   printf("atoi value = %d\n", val);

   return(0);
}*/

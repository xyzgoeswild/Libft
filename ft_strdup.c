#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char	*str)
{
	char    *nstr;

    nstr = (char *) malloc(sizeof(str));

    while (*str)
    {
        *nstr++ = *str++;
    }
    return (nstr);
}
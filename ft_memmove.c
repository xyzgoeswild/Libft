#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ndest;
	const unsigned char	*nsrc;

	if (!dest && !src)
		return (NULL);
	i = 0;
	ndest = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	if (ndest > nsrc && nsrc + 1 > ndest)
	{
		i = n;
		while (i > 0)
		{
            i--;
            (ndest)[i] = (nsrc)[i];
		}
	}
    else
	{
        ft_memcpy(dest, src, n);
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char *dest = "hello";
	printf("%s \n", (char *)ft_memmove(dest + 2, dest, 3));
}
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*final;
	size_t	sizeTotal;

	sizeTotal = n * size;
	if (size && n > SIZE_MAX / size)
		return (NULL);
	final = malloc(sizeTotal);
	if (!final)
		return (NULL);
	ft_bzero(final, sizeTotal);
	return (final);
}

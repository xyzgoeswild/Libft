/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 06:35:50 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/08 06:39:06 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		ft_memcpy(dest, src, n);
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:58:19 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/11/16 03:16:23 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*final;
	unsigned char	*source;

	final = dest;
	source = (unsigned char *)src;
	while (n--)
	{
		*final++ = *source++;
	}
	return (final);
}

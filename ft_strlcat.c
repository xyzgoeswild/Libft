/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 07:18:53 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/10 07:16:09 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	i;

	i = 0;
	dest_len = 0;
	if (!dest && size == 0)
		return (0);
	while (dest_len < size && dest[dest_len])
		dest_len++;
	if (dest_len >= size)
		return (ft_strlen(src) + size);
	while (src[i])
	{
		if (dest_len + i < size - 1)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		else
		{
			dest[dest_len + i] = '\0';
			return (dest_len + ft_strlen(src));
		}
	}
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}

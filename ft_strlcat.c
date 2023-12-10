/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 07:18:53 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/10 12:01:19 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_initilize_vars(size_t *i, size_t *j)
{
	*i = 0;
	*j = 0;
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	i;

	ft_initilize_vars(&dest_len, &i);
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

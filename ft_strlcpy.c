/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:57:57 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/11/17 18:52:55 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	copied;
	int		len;

	copied = 0;
	len = ft_strlen(src);
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (src[] && copied < (size - 1))
	{
		dst[i] = *src[i];
		copied++;
	}
	dst[i] = '\0';
	return (len);
}

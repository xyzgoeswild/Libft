/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 07:18:53 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/06 04:16:53 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dst == NULL && size == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	while (*dst && size > 0 && size--)
	{
		dst++;
	}
	while (*src && size > 1 && size--)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (src_len + dst_len);
}

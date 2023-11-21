/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 08:43:18 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/11/16 03:16:34 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (*(unsigned char *)str && n--)
	{
		if (*(unsigned char *)str != c)
			(unsigned char *)str++;
		else
			return ((unsigned char *)str);
	}
	return (NULL);
}

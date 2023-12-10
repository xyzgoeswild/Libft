/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 08:43:18 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/10 07:34:17 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*final;

	i = 0;
	final = (unsigned char *)str;
	while (i <= n)
	{
		if (final[i] != (unsigned char)c)
			i++;
		else
			return (final);
	}
	return (0);
}

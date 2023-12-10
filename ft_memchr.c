/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 08:43:18 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/10 11:58:26 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*final;

	final = (unsigned char *)str;
	while (n > 0)
	{
		if (*final == (unsigned char)c)
			return (final);
		final++;
		n--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 08:43:18 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/06 04:20:59 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*final;

	final = (unsigned char *)str;
	while (final && n > 0)
	{
		if (*final != (unsigned char)c)
			final++;
		else
			return (final);
		n--;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int *rizz = (int *)ft_memchr(test, 3, 40);
	for (int i = 0; rizz[i] != 0; i++)
		printf("%d \n", rizz[i]);
	// char test[] = "hello de flisha";
	// char *rs = ft_memchr(test, 'l', 30);
	// printf("%s \n", rs);
}
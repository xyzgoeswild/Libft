/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 08:42:42 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/11/16 03:16:42 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while (n && *(unsigned char *)str1 == *(unsigned char *)str2)
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

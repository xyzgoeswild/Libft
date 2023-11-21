/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 08:43:34 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/11/16 03:18:27 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *str1, const char *str2, size_t n)
{
	while (n && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

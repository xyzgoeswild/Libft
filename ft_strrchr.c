/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:25:03 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/11/30 22:32:25 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	while (len >= 0)
	{
		if (*str != c)
		{
			str--;
			len--;
		}
		else
		{
			return ((char *) str);
		}
	}
	return (0);
}

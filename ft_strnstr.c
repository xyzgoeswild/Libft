/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 06:36:38 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/08 06:39:22 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *substring, size_t len)
{
	unsigned long	i;
	int				j;

	i = 0;
	j = 0;
	if (*substring == 0)
		return ((char *)string);
	while (string[i])
	{
		j = 0;
		while ((string[i] == substring[j]) && string[i] && i < len)
		{
			i++;
			j++;
		}
		if (!substring[j])
			return ((char *)&string[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}

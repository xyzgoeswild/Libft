/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:17:11 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/08 06:36:24 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rizz;
	size_t	length;
	size_t	i;
	size_t	j;

	length = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	rizz = (char *)malloc(sizeof(char) * (length + 1));
	if (!rizz)
		return (NULL);
	while (s1[i])
	{
		rizz[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		rizz[i + j] = s2[j];
		j++;
	}
	rizz[i + j] = '\0';
	return (rizz);
}

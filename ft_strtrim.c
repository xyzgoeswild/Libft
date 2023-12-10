/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 06:36:47 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/10 10:11:54 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_set(char const *c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == *c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	e;
	char	*rtn;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	s = 0;
	e = ft_strlen(s1);
	while (check_set(&s1[s], set) == 1)
		s++;
	if (s == ft_strlen(s1))
		return (ft_strdup(""));
	while (check_set(&s1[e - 1], set) == 1)
		e--;
	rtn = ft_substr(s1, s, e - s);
	return (rtn);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:17:11 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/11/20 18:01:26 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	int		ss1;
	int		ss2;
	int		i;

	ss1 = ft_strlen(s1);
	ss2 = ft_strlen(s2);
	i = 0;
	final = (char *) malloc(sizeof(char) * (ss1 + ss2) + 1);
	if (final == NULL)
		return (NULL);
	while (*s1)
	{
		final[i++] = *s1++;
	}
	while (*s2)
	{
		final[i++] = *s2++;
	}
	final[i] = '\0';
	return (final);
}

/*#include <stdio.h>

int main()
{
	char	*s1 = "xyz, ";
	char	*s2 = "is top G";
	char	*res;

	res = ft_strjoin(s1, s2);

	printf("%s\n", res); // Expecting "xyz, is top G"
	return (0);
}*/

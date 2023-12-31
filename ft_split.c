/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 06:35:59 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/10 11:29:50 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_strings(char **strigns)
{
	size_t	i;

	i = 0;
	while (strigns[i] != NULL)
	{
		free(strigns[i]);
		i++;
	}
	free(strigns);
	return (NULL);
}

static size_t	count(char const *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	ft_initilize_vars(size_t *i, size_t *j)
{
	*i = 0;
	*j = 0;
}

static char	**magic(char **strings, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	ft_initilize_vars(&i, &j);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start < i)
		{
			strings[j] = (char *)ft_calloc((i - start + 1), (sizeof(char)));
			if (!strings[j])
				return (NULL);
			strings[j] = ft_memmove(strings[j], s + start, i - start);
			if (!strings[j])
				return (NULL);
			j++;
		}
	}
	strings[j] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	counted;

	if (!s)
		return (NULL);
	if (s[0] == 0)
	{
		strings = (char **)malloc(1 * sizeof(char *));
		if (!strings)
			return (NULL);
		strings[0] = NULL;
		return (strings);
	}
	counted = count(s, c);
	strings = (char **)malloc((counted + 1) * (sizeof(char *)));
	if (!strings)
		return (NULL);
	if (magic(strings, s, c) == NULL)
		return (free_strings(strings));
	return (strings);
}

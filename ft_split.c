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
	size_t	i;
	size_t	count;
	int		torf;

	i = 0;
	count = 0;
	torf = 0;
	while (str[i])
	{
		if (str[i] == c)
			torf = 0;
		if (torf == 0)
		{
			count++;
			torf = 1;
		}
		i++;
	}
	return (count);
}

static char	**magic(char **strings, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start < i)
		{
			strings[j] = (char *)malloc((i - start + 1) * (sizeof(char)));
			if (!strings[j])
				return (NULL);
			strings[j] = ft_memcpy(strings[j], s + start, i - start);
			strings[j][i - start] = '\0';
			j++;
		}
	}
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	counted;

	counted = count(s, c);
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
	strings = (char **)malloc((counted + 1) * (sizeof(char *)));
	if (!strings)
		return (NULL);
	if (magic(strings, s, c) == NULL)
		return (free_strings(strings));
	return (strings);
}

#include <stdio.h>

int    main(void)
{
    char **strs = ft_split("Ali is \0super cool", ' ');
    for (int i = 0; i < 4; i++)
	{
       printf("%s\n", strs[i]);
		free(strs[i]);
	}
	free(strs);
}
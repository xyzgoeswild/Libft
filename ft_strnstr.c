#include <stddef.h>
#include <stdio.h>
#include <string.h>
 
char	*ft_strnstr(const char *string, const char *substring, size_t len)
{
	unsigned long	i;
	int		j;

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

/*int main()
{
    // Example usage of strnstr
    const char haystack[29] = "Hello, World This is a test.";
    const char needle[6] = "World";
    int len = 15;
    
    // Find the first occurrence of needle in haystack, searching up to the first 10 characters
    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("%s\n", result);
    } else {
        printf("%s not found in the first %d characters.\n", needle, len);
    }
    return 0;
}*/

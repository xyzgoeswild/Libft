#include <stdlib.h>

char    *ft_strdup(const char	*str)
{
	char    *nstr;

    nstr = (char *) malloc(sizeof(str));

    while (*str)
    {
        *nstr++ = *str++;
    }
    return (nstr);
}

// // C program to demonstrate strdup()
// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char source[] = "GeeksForGeeks";

// 	// A copy of source is created dynamically
// 	// and pointer to copy is returned.
// 	char* target = strdup(source); 

// 	printf("%s", target);
// 	return 0;
// }
#include <stdio.h>
#include <stddef.h>


size_t check_set(char const *c, char const *set)
{
    size_t i;

    i = 0;
    while(set[i] != '\0')
    {
        if(set[i] == *c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  j;
    char    *rtr;

    if(!s1 || !set)
        return (NULL);
    i = 0;
    j = ft_strlen(s1);
    while(check_set(&s1[i], set) == 1)
        i++;
    if(i >= j)
        return(ft_strdup(""));
    while(check_set(&s1[j], set) == 1)
        j--;
    rtr = (char *)ft_substr(s1, i, j - i); 
    return (rtr);
}
#include <stdio.h>
int main()
{
    char    str[] = "   v  ((__)) testetsztetst v  (()_))";
    char set[] = "v ()_";
    printf("%s\n", ft_strtrim(str, set));
}
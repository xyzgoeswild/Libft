#include "libft.h"

static int count_words(const char *s, char c)
{
    size_t  i = 0;
    size_t  wc = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            i++;
        }
        if ((i = 0 || s[i - 1] == c) && s[i] != c)
        {
            wc++;
        }
        i++;
    }
}

char **ft_split(char const *s, char c)
{

}


#include <stdlib.h>
#include <stdio.h> // for debugging purposes

static int count_words(const char *s, char c)
{
    int count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s == c)
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }
        s++;
    }
    return count;
}

static char *strndup(const char *s, size_t n) {
    char *result = malloc(n + 1);
    if (result) {
        strncpy(result, s, n);
        result[n] = '\0';
    }
    return result;
}

char **ft_split(char const *s, char c) {
    int num_words = count_words(s, c);
    char **result = malloc((num_words + 1) * sizeof(char *));  // +1 for the NULL pointer at the end

    if (result == NULL) {
        return NULL;  // Allocation failure
    }

    int word_index = 0;
    int in_word = 0;
    const char *start = s;

    while (*s) {
        if (*s == c) {
            if (in_word) {
                result[word_index++] = strndup(start, s - start);
                in_word = 0;
            }
        } else if (!in_word) {
            start = s;
            in_word = 1;
        }
        s++;
    }

    // If the last character is not a delimiter, we need to capture the last word
    if (in_word) {
        result[word_index++] = strndup(start, s - start);
    }

    // Null-terminate the array
    result[word_index] = NULL;

    return result;
}

int main() {
    const char *input = "ali@@is@a@@G";
    char **result = ft_split(input, '@');

    if (result != NULL) {
        for (int i = 0; result[i] != NULL; i++) {
            printf("%s", result[i]);
            free(result[i]);
        }

        free(result);
    }

    return 0;
}

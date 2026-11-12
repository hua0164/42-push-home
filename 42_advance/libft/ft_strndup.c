#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strndup(char *s1, size_t n)
{
    char *str;
    size_t i;
    size_t len;

    len = 0;
    while(len < n && s1[len])
        len++;
    if (len == SIZE_MAX)
        return (NULL);

    str = malloc(len + 1);
    if (!str)
        return (NULL);
    
    i = 0;
    while(i < len)
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
int main(void)
{
    char *str;
    str = ft_strndup("hello", 2);
    printf("%s\n", str);
    free(str);
}
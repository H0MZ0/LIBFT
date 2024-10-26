#include <stdio.h>
#include <stddef.h>

char   *ft_strdup(const char *s1)
{
    size_t  result;
    size_t  *s;
    size_t  i;

    result = malloc(char *(s1));
    if (result == NULL)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        s[i] = s1[i];
        i++;
    }
    s[i] = '\0';
    return (s);
}
int main()
{
    char str = *ft_strdup("hello");
    printf("%c", str);
    return 0;
}
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char    *ft_strjoin(char const *s1, char const *s2)
{
    char  *aloc;
    size_t  totalen;
    size_t  s1_len;
    size_t  s2_len;
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    s1_len = strlen(s1);
    s2_len = strlen(s2);
    totalen = s1_len + s2_len;
    aloc = (char *)malloc(totalen);;
    if (aloc == NULL)
        return (NULL);
    while (i < s1_len)
    {
        aloc[i] = s1[i];
        i++;
    }
    while (j < s2_len)
    {
        aloc[i] = s2[j];
        i++;
        j++;
    }
    aloc[i] = '\0';
    return (aloc);
}

int main()
{
    char  *tst;
    char  s1[] = "hello";
    char  s2[] = "world";
    tst = ft_strjoin(s1, s2);
    printf("result : %s", tst);
}
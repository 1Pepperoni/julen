#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *str, int start, int end)
{
        int i = 0;
        char *s;
        s = malloc(sizeof(char) * (end - start + 1));
        while(start < end)
        {
                s[i] = str[start];
                start++;
                i++;
        }
        s[i] = '\0';
        return (s);
}

int ft_strlen(char *str)
{
        int i = 0;
        while (str[i])
                i++;
        return (i);
}

char **ft_split(char *str)
{
        int i = 0;
        int j = 0;
        int k = 0;
        int count_words = 0;
        char **tab;
        while(str[i])
        {
                while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
                        i++;
                if(str[i] && (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')))
                {
                        count_words++;
                        while(str[i] && (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')))
                                i++;
                }
        }
        tab = malloc(sizeof(char *) * count_words + 1);
        i  = 0;
        while(str[i])
        {
                while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
                        i++;
                if(str[i] && (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')))
                {
                        j = i;
                        while(str[j] && (!(str[j] == ' ' || str[j] == '\t' || str[j] == '\n')))
                                j++;
                        tab[k] = ft_strncpy(str, i, j);
                        k++;
                        i = j;
                }
        }
        tab[k] = NULL;
        return (tab);
}

int main()
{
        char **tab;
        int i = 0;

        tab = ft_split("bonjour salut cava truc machin");
        while(i < 5)
        {
                printf("tab[%d] = %s\n", i, tab[i]);
                i++;
        }
}
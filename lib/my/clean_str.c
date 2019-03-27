/*
** EPITECH PROJECT, 2019
** clean_str
** File description:
** remove useless space and tab
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char *);

char *remove_start_end_space(char *str)
{
    int i = 0;

    for (; str[0] != '\0' && str[0] == ' '; str++);
    if (str[0] == '\0')
        return (str);
    for (; str[i + 1] != '\0'; i++);
    while (str[i] == ' ')
        i--;
    str[i + 1] = '\0';
    return (str);
}

char *remove_tab(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '\t')
            str[i] = ' ';
        i++;
    }
    return (str);
}

char *clean_str(char *str)
{
    int i = 0;
    int j = 0;
    int count = 0;
    char *dest = NULL;

    str = remove_tab(str);
    dest = malloc(sizeof(char) * (my_strlen(str) + 1));
    while (str[i] != '\0') {
        if (str[i] == ' ')
            count++;
        else
            count = 0;
        if (count < 2)
            dest[j++] = str[i];
        i++;
    }
    dest[j] = '\0';
    dest = remove_start_end_space(dest);
    free(str);
    return (dest);
}

/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** take_value_str
*/

#include <stdlib.h>

int my_strlen(char *);

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    char *ret = NULL;

    if (dest == NULL)
        return (src);
    if (src == NULL)
        return (dest);
    ret = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    while (dest[i] != '\0') {
        ret[i] = dest[i];
        i++;
    }
    while (src[j] != '\0')
        ret[i++] = src[j++];
    ret[i] = '\0';
    free(dest);
    return (ret);
}

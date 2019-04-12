/*
** EPITECH PROJECT, 2019
** check_map
** File description:
** check_map
*/

#include "my.h"

int check_char(char *map)
{
    int n = 0;

    while (map[n] != '\0') {
        if (map[n] != '*' && map[n] != 'X')
            return (FALSE);
        n++;
    }
    return (TRUE);
}

int check_correct_synthaxe(char **map)
{
    int n = 0;

    while (map[n] != NULL) {
        if (check_char(map[n]) == FALSE)
            return (FALSE);
        n++;
    }
    return (TRUE);
}

int check_size(char **map)
{
    int n = 0;
    int x = 0;
    int x_a = 0;

    while (map[n + 1] != NULL) {
        x = my_strlen(map[n]);
        x_a = my_strlen(map[n + 1]);
        if (x != x_a)
            return (FALSE);
        n++;
    }
    return (TRUE);
}

int check_map(char **map)
{
    int n = 0;

    if (array_len(map) == 1) {
        while (map[0][n] != '\0') {
            my_putchar('o');
            n++;
        }
        return (FALSE);
    }
    if (check_correct_synthaxe(map) == FALSE) {
        my_putstr_error("Error: Syntaxe\n");
        return (FALSE);
    }
    if (check_size(map) == FALSE) {
        my_putstr_error("Error: Size\n");
        return (FALSE);
    }
    return (TRUE);
}
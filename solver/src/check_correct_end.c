/*
** EPITECH PROJECT, 2019
** check_correct end
** File description:
** check_correct_end
*/

#include "my.h"

int check_around_first(char **map, int x, int y)
{
    int i = 0;

    if (map[y][x] != '\0' && map[y][x + 1] != '\0' && map[y][x + 1]  == 'X')
        i++;
    if (map[y + 1][x] != '\0' && map[y + 1][x]  == 'X')
        i++;
    return (i);
}

int check_around_end(char **map, int x, int y)
{
    int i = 0;

    if (map[y - 1][x] != '\0' && map[y - 1][x] == 'X')
        i++;
    if (map[y][x - 1] != '\0' && map[y][x - 1] == 'X')
        i++;
    return (i);
}

int check_correct_end(char **map)
{
    int x = 0;
    int y = 0;

    if (check_around_first(map, x, y) == 2) {
        my_putstr("no solution found");
        return (FALSE);
    }
    y = array_len(map);
    x = my_strlen(map[y - 1]);
    if (check_around_end(map, (x - 1), (y - 1)) == 2) {
        my_putstr("no solution found");
        return (FALSE);
    }
    return (TRUE);
}
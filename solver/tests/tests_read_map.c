/*
** EPITECH PROJECT, 2019
** tests read map
** File description:
** all tests to my map reading
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(check_map, err)
{
    /*Check all error*/
}

Test(load_map, load)
{
    int n = 0;
    int i = 0;
    char *res[] = {"***x", "**x*", NULL};
    char *map[] = {"***x", "**x*", NULL};
    maze_t maze = load_my_maze(map);

    while (map[n] != NULL) {
        for (i = 0; maze.all_maze[n][i].ch != '\0'; i++)
            cr_assert_eq(maze.all_maze[n][i].ch, res[n][i]);
        n++;
    }
}
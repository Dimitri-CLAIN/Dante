/*
** EPITECH PROJECT, 2019
** free_annexe
** File description:
** free_annex
*/

#include "my.h"

void free_arr_clean(char **map, char *clean)
{
    free_array(map);
    free(clean);
}

void free_maze_ac(room_t **all_maze, room_t *maze)
{
    free(maze);
    free(all_maze);
}
/*
** EPITECH PROJECT, 2019
** make_maze_imperfect
** File description:
** make maze imperfect
*/

#include "my.h"

int get_nb_wall(char **maze)
{
    int i = 0;
    int return_value = 0;

    while (maze[i] != NULL) {
        for (int j = 0; maze[i][j] != '\0'; j++)
            return_value += (maze[i][j] == '0') ? 1 : 0;
        i++;
    }
    return (return_value);
}

int is_maze_too_small(char **maze, int width, int height)
{
    if ((width + height * 2) >= get_nb_wall(maze))
        return (TRUE);
    return (FALSE);
}

char **make_it_imperfect(char **maze, int width, int height)
{
    int turn = (is_maze_too_small(maze, width, height) == TRUE) ?
                5 : (width + height) * 2;
    int x = 0;
    int y = 0;

    while (turn != 0) {
        x = get_random_nb(width);
        y = get_random_nb(height);
        if (maze[y][x] = '0') {
            maze[y][x] = '2';
            turn--;
        }
    }
    return (maze);
}
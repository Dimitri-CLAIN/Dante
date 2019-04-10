/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    maze_t maze;

    if (av[1] == NULL)
        return (84);
    maze = create_my_maze(av[1]);
    if (maze.all_maze[0][0].type == SEMI) {
        free(maze.all_maze[0]);
        free(maze.all_maze);
        return (0);
    } else if (maze.all_maze[0][0].type == WRONG) {
        free(maze.all_maze[0]);
        free(maze.all_maze);
        return (84);
    }
    manage_solver(&maze);
    return (0);
}
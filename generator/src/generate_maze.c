/*
** EPITECH PROJECT, 2019
** generate_maze
** File description:
** generate maze
*/

#include "my.h"

char **take_a_step(char **maze, pos_t pos, int way)
{
    pos_t tmp = get_semi_position(way);

    maze[pos.y + tmp.y][pos.x + tmp.x] = '2';
    tmp = get_position(way);
    maze[pos.y + tmp.y][pos.x + tmp.x] = '2';
    return (maze);
}

pos_t change_pos(pos_t pos, int way)
{
    pos_t tmp = get_position(way);

    pos.x += tmp.x;
    pos.y += tmp.y;
    return (pos);
}

char **algo(char **maze, pos_t pos)
{
    int way = -1;
    stack_t *stack = NULL;

    stack = push_stack(stack, pos.x, pos.y);
    while (is_all_cells_visited(maze) != TRUE) {
        if (is_neighbours_visited(maze, pos) == FALSE) {
            way = choose_rand_neighbour(maze, pos);
            stack = push_stack(stack, pos.x, pos.y);
            maze = take_a_step(maze, pos, way);
            pos = change_pos(pos, way);
        } else if (stack != NULL) {
            stack = pop_stack(stack);
            if (stack == NULL)
                break;
            pos = stack->pos;
        }
    }
    clear_stack(stack);
    return (maze);
}

char  **generate_maze(char **maze)
{
    pos_t pos;

    pos.x = 0;
    pos.y = 0;
    maze[pos.y][pos.x] = '2';
    maze = algo(maze, pos);
    if (my_strlen(maze[0]) > 1 &&
        maze[array_len(maze) - 1][my_strlen(maze[0]) - 1] == '3')
        maze[array_len(maze) - 1][my_strlen(maze[0]) - 2] = '2';
    return (maze);
}
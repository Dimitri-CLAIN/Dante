/*
** EPITECH PROJECT, 2019
** tests_my_ algo
** File description:
** units tests
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>


void redirect_all_st(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(check_algo_solv, check_algo, .init = redirect_all_st)
{
    char *map[] = {"*****XX****X********XXXX", "XX******XX***XXXXX***XXX",
"XX***XXXX**XXXXX****XXXX", "XX***XXXXXXXXXXXXXX****X",
"*****XXXXXX****XX***XXXX", "XX*************XXXX*****", NULL};
    maze_t maze = load_my_maze(map);

    maze.all_maze[0][0].type = FIRST;
    maze.all_maze[array_len(map) - 1][my_strlen(map[0]) - 1].type = END;
    my_algo(&maze, 0, 0);
    print_my_maze(&maze);
    fflush(NULL);
    cr_assert_stdout_eq_str("oooooXXooooXooooooooXXXX\nXX**ooooXXoooXXXXX*o*XX\
X\nXX***XXXX**XXXXX***oXXXX\nXX***XXXXXXXXXXXXXXo***X\n*****XXXXXX****XX**oXXXX\
\nXX*************XXXXooooo");
}
/*
** EPITECH PROJECT, 2019
** tests read map
** File description:
** all tests to my map reading
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(check_size, check_map_err, .init = redirect_all_std)
{
    char *map[] = {"*XX*X***", "**X*XX*X*", NULL};
    int res = check_map(map);

    cr_assert_eq(1, res);
    cr_assert_stderr_eq_str("Error: Size\n");
}

Test(check_size_correct, check_map_err, .init = redirect_all_std)
{
    char *map[] = {"*XX*X****", "**X*XX*X*", NULL};
    int res = check_map(map);

    cr_assert_eq(0, res);
}

Test(check_size_q, check_map_err, .init = redirect_all_std)
{
    char *map[] = {"*XX*X***", NULL};
    int res = check_map(map);

    cr_assert_eq(0, res);
}

Test(check_synthaxe, check_map_err, .init = redirect_all_std)
{
    char *map[] = {"*XX*X***", "**XzXX*X", NULL};
    int res = check_map(map);

    cr_assert_eq(1, res);
    cr_assert_stderr_eq_str("Error: Syntaxe\n");
}

Test(check_end, check_map_err, .init = redirect_all_std)
{
    char *map[] = {"********X", "*******X*", NULL};
    int res = check_correct_end(map);

    cr_assert_eq(1, res);
    cr_assert_stderr_eq_str("Error: End false.\n");
}

Test(check_beginning, check_map_err, .init = redirect_all_std)
{
    char *map[] = {"*XX*X**X", "X*X*XX***", NULL};
    int res = check_correct_end(map);

    cr_assert_eq(1, res);
    cr_assert_stderr_eq_str("Error: Beginning false.\n");
}

Test(check_beginning_err, check_map_err, .init = redirect_all_std)
{
    char *map[] = {"*", "*", NULL};
    int res = check_correct_end(map);

    cr_assert_eq(0, res);
}

Test(check_, check_map_err, .init = redirect_all_std)
{
    char *map[] = {"", "", NULL};
    int res = check_correct_end(map);

    cr_assert_eq(0, res);
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

Test(print_map, print, .init = redirect_all_std)
{
    int n = 0;
    int i = 0;
    char *res = "***x\n**x*\n";
    char *map[] = {"***x", "**x*", NULL};
    maze_t maze = load_my_maze(map);

    print_my_maze(&maze);
    cr_assert_stdout_eq_str(res);
}
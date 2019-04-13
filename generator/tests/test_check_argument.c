/*
** EPITECH PROJECT, 2019
** test_check_argument
** File description:
** tests
*/

#include "my.h"
#include <criterion/criterion.h>

Test(check_arg, check_is_arg_num)
{
    char **tmp = my_str_to_word_array("./generator 5 5 perfect", ' ');
    int expected = TRUE;
    int got = check_arg(tmp);

    cr_assert_eq(got, expected);
}

Test(check_arg, check_is_arg_num_fail)
{
    char **tmp = my_str_to_word_array("./generator toto tata perfect", ' ');
    int expected = FALSE;
    int got = check_arg(tmp);

    cr_assert_eq(got, expected);
}

Test(check_arg, check_is_arg_num_fail_2)
{
    char **tmp = my_str_to_word_array("./generator 5 tata perfect", ' ');
    int expected = FALSE;
    int got = check_arg(tmp);

    cr_assert_eq(got, expected);
}

Test(check_arg, check_is_arg_num_fail_3)
{
    char **tmp = my_str_to_word_array("./generator toto 5 perfect", ' ');
    int expected = FALSE;
    int got = check_arg(tmp);

    cr_assert_eq(got, expected);
}

Test(check_arg, check_good_arg)
{
    char **tmp = my_str_to_word_array("./generator -5 0 perfect", ' ');
    int expected = FALSE;
    int got = check_arg(tmp);

    cr_assert_eq(got, expected);
}

Test(check_arg, check_good_arg_2)
{
    char **tmp = my_str_to_word_array("./generator 5 0 perfect", ' ');
    int expected = FALSE;
    int got = check_arg(tmp);

    cr_assert_eq(got, expected);
}

Test(check_arg, check_good_arg_3)
{
    char **tmp = my_str_to_word_array("./generator 0 5 perfect", ' ');
    int expected = FALSE;
    int got = check_arg(tmp);

    cr_assert_eq(got, expected);
}

Test(check_arg, check_perfect_arg_fail)
{
    char **tmp = my_str_to_word_array("./generator 5 5 perfecto", ' ');
    int expected = FALSE;
    int got = check_arg(tmp);

    cr_assert_eq(got, expected);
}

Test(check_arg, check_perfect_arg)
{
    char **tmp = my_str_to_word_array("./generator 5 5 perfect", ' ');
    int expected = TRUE;
    int got = check_arg(tmp);

    cr_assert_eq(got, expected);
}

Test(check_arg, check_perfect_arg_null)
{
    char **tmp = my_str_to_word_array("./generator 5 5", ' ');
    int expected = TRUE;
    int got = check_arg(tmp);

    cr_assert_eq(got, expected);
}
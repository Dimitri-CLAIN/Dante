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
    char **tmp = my_str_to_word_array("./generator 5 5 prefect", ' ');
    int expected = FALSE;
    int got = check_arg(tmp);

    cr_assert_eq(got, expected);
}
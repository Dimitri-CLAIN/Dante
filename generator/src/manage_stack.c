/*
** EPITECH PROJECT, 2019
** manage_stack
** File description:
** manage stack
*/

#include "my.h"

stack_t *push_stack(stack_t *stack, int x, int y)
{
    stack_t *elem = malloc(sizeof(stack_t));

    elem->pos.x = x;
    elem->pos.y = y;
    elem->next = stack;
    return (elem);
}

stack_t *pop_stack(stack_t *stack)
{
    stack_t *elem = NULL;

    elem = stack->next;
    free(stack);
    return (elem);
}

void clear_stack(stack_t *stack)
{
    while (stack != NULL)
        stack = pop_stack(stack);
}
/*
** EPITECH PROJECT, 2019
** struct.h
** File description:
** struct.h
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct pos_s {
    int x;
    int y;
}pos_t;

typedef struct stack_s {
    pos_t pos;
    struct stack_s *next;
}stack_t;

#endif
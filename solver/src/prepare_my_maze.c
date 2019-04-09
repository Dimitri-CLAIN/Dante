/*
** EPITECH PROJECT, 2019
** prepare my maze
** File description:
** prepare_my_maze
*/

#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

char *read_my_file(char *file)
{
    int n = 0;
    size_t size = 0;
    char *buf = NULL;
    char *clean = my_strdup("");
    FILE *fd = fopen(file, "r");

    while (getline(&buf, &size, fd) != -1) {
        clean = my_strcat(clean, buf);
    }
    fclose(fd);
    return (clean);
}

room_t *init_my_rooms(char *map)
{
    int n = 0;
    room_t *room = malloc(sizeof(*room) * (my_strlen(map) + 1));

    while (map[n] != '\0') {
        room[n].ch = map[n];
        room[n].type = OTHER;
        room[n].state = UNKNOW;
        n++;
    }
    room[n].ch = '\0';
    return (room);
}

maze_t load_my_maze(char **map)
{
    int n = 0;
    maze_t maze;
    room_t **tab = malloc(sizeof(*tab) * array_len(map));

    while (map[n] != NULL) {
        tab[n] = init_my_rooms(map[n]);
        n++;
    }
    maze.all_maze = tab;
    return (maze);
}

maze_t create_my_maze(char *file)
{
    char **map = my_str_to_all_array(read_my_file(file), '\n');
    maze_t maze;

    if (check_map(map) == FALSE)
        return;
    if (check_correct_end(map) == FALSE)
        return;
    maze = load_my_maze(map);
    free_array(map);
    return (maze);
}
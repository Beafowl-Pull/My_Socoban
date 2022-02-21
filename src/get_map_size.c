/*
** EPITECH PROJECT, 2022
** My_Socoban
** File description:
** get_map_size
*/

#include "../include/proj.h"

int get_map_size(char *map)
{
    FILE *fp;
    int i = 0;
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;
    fp = fopen(map, "r");

    if (fp == NULL)
        my_printf("FILE_ERROR");
    while ((read = getline(&line, &len, fp)) != -1)
        i += my_strlen(line);
    if (line)
        free(line);
    return (i);
}

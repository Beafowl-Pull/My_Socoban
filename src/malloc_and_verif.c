/*
** EPITECH PROJECT, 2022
** My_Socoban
** File description:
** malloc_and_verif
*/

#include "../include/proj.h"
#include "../lib/include/my_puts.h"

char *malloc_and_verif(char *str, int nb)
{
    str = malloc(sizeof(char) * nb);
    if (str == NULL) {
        my_printf("MEMORY_ERROR");
        return (84);
    }
    else
        return (str);
}

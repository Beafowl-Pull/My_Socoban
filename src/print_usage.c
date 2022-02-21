/*
** EPITECH PROJECT, 2022
** My_Socoban
** File description:
** print_usage
*/

#include "../include/proj.h"
#include "../lib/include/my_puts.h"

void print_h()
{
    my_printf("USAGE:\n");
    my_printf("\t ./my_sokoban map\n\n");
    my_printf("DESCRIPTION:\n");
    my_printf("\t map\t file representing the warehouse map,");
    my_printf(" containing '#' for walls,\n");
    my_printf("\t\t 'P' for player, 'X' for boxes and '0' for");
    my_printf(" storage locations");
}
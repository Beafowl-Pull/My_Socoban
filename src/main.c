/*
** EPITECH PROJECT, 2021
** my_socoban
** File description:
** the main entry point for the project
*/

#include "my_puts.h"
#include "../include/proj.h"

int handle_error (int ac, char **av)
{
    if (ac != 2) {
        print_h();
        return (84);
    }
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        print_h();
    return (0);
}

int handle_error_dir (DIR *dir)
{
    if (dir != NULL) {
        my_printf("DIR_ERROR");
        return (84);
    }
    return (0);
}

int handle_error_file (int fd)
{
    if (fd == -1) {
        my_printf("FILE_ERROR");
        return (84);
    }
     return (0);
}

int main (int ac, char **av)
{
    int size = 0;
    DIR *dir;
    char *buff = NULL;
    int fd = 0;
    int ret = 0;

    handle_error(ac, av);
    dir = opendir(av[1]);
    handle_error_dir(dir);
    size = get_map_size(av[1]);
    buff = malloc_and_verif(buff, (size + 1));
    fd = open(av[1], O_RDONLY);
    ret = read(fd, buff, size + 1);
    buff[ret] = '\0';
    check_bad_file(buff);
    setup_graphics(buff, av);
    return (0);
}

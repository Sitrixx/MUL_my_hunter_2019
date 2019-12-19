/*
** EPITECH PROJECT, 2019
** my_hunter.c
** File description:
** game duck hunt
*/

#include "../include/my.h"

int desc(char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        write(1, "Essayez de venir a bout du Dracaufeu, ", 38);
        write(1, "si vous échouez 3 tirs vous avez perdu !\n", 42);
        write(1, "Bonne chance Dresseur Astek !\n", 29);
        write(1, "\nUSAGE: ./my_hunter\n", 19);
    }
    else
        write(1, "Wrong flag !!!\n", 15);
    return (0);
}

int main(int ac, char **av)
{
    hunter my;

    if (ac == 2) {
        desc(av);
        return (0);
    }
    my.video_mode = (sfVideoMode){1920, 1080, 32};
    init_sprites(&my);
    music(&my);

    while (sfRenderWindow_isOpen(my.window)) {
        display_menu(&my);
        open_window(&my);
        //init_sprites(&my);
        hitbox(&my);
        close_window(&my);
    }
    destroy(&my);
    return (0);
}

/*
** EPITECH PROJECT, 2019
** my_hunter.c
** File description:
** game duck hunt
*/

#include "my.h"

int desc(char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        write(1, "Essayez de venir a bout du dracaufeu, ", 38);
        write(1, "si vous échouez 3 tirs vous avez perdu!\n", 41);
        write(1, "Bonne chance Dresseur Astek !\n", 29);
    }
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
    //cursor(&my);
    music(&my);

    while (sfRenderWindow_isOpen(my.window)) {
        open_window(&my);
        hitbox(&my);
        close_window(&my);
    }
    destroy(&my);
    return (0);
}

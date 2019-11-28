/*
** EPITECH PROJECT, 2019
** init.c
** File description:
** init variables and functions
*/

#include "my.h"

int init_sprites(hunter *my)
{
    my->window = sfRenderWindow_create(my->video_mode, "Pokemon Hunter",
                                       sfResize | sfClose, NULL);
    if (!my->window)
        return (84);
    my->texture_background = sfTexture_createFromFile("backg.png", NULL);
    my->texture_duck = sfTexture_createFromFile("sprite.png", NULL);
    my->texture_cursor = sfTexture_createFromFile("visor.png", NULL);
    my->sprite_background = sfSprite_create();
    my->sprite_duck = sfSprite_create();
    my->sprite_cursor = sfSprite_create();
    sfSprite_setTexture(my->sprite_background, my->texture_background, sfTrue);
    sfSprite_setTexture(my->sprite_duck, my->texture_duck, sfTrue);
    sfSprite_setTexture(my->sprite_cursor, my->texture_cursor, sfTrue);
    return (0);
}

int music(hunter *my)
{
    my->music = sfMusic_createFromFile("music.ogg");
    if (!my->music)
        return (84);
    sfMusic_play(my->music);
    my->clock = sfClock_create();
    sfRenderWindow_setMouseCursorVisible(my->window, sfTrue);
    return (0);
}

void create_rect(hunter *my)
{
    my->rect.left = 9;
    my->rect.top = 0;
    my->rect.width = 250;
    my->rect.height = 149;
    my->rect2.left = 258;
    my->rect2.top = 0;
    my->rect2.width = 256;
    my->rect2.height = 149;
    my->rect3.left = 518;
    my->rect3.top = 0;
    my->rect3.width = 256;
    my->rect3.height = 149;

}

void button_position(hunter *my)
{
    my->position_duck.x += 1;
    if (my->position_duck.x >= 1920)
        my->position_duck.x = -110;
}

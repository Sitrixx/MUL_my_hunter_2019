/*
** EPITECH PROJECT, 2019
** window.c
** File description:
** disp_window
*/

#include "../include/my.h"

void open_window(hunter *my)
{
    sfRenderWindow_setFramerateLimit(my->window, 200);
    button_position(my);
    create_rect(my);
    sfRenderWindow_drawSprite(my->window, my->sprite_background, NULL);
    sfSprite_setPosition(my->sprite_duck, my->position_duck);
    if (sfTime_asSeconds(sfClock_getElapsedTime(my->clock)) > 0.00001) {
        if (my->counter % 3 == 0)
            sfSprite_setTextureRect(my->sprite_duck, my->rect);
        if (my->counter % 3 == 1)
            sfSprite_setTextureRect(my->sprite_duck, my->rect2);
        if (my->counter % 3 == 2)
            sfSprite_setTextureRect(my->sprite_duck, my->rect3);
        my->counter = my->counter + 2;
        sfRenderWindow_drawSprite(my->window, my->sprite_duck, NULL);
        //sfRenderWindow_display(my->window);
    }
}

void close_window(hunter *my)
{
    while (sfRenderWindow_pollEvent(my->window, &my->event)) {
        if (my->event.type == sfEvtClosed)
            sfRenderWindow_close(my->window);
    }

}

void destroy(hunter *my)
{
    sfSprite_destroy(my->sprite_background);
    sfTexture_destroy(my->texture_background);
    sfSprite_destroy(my->sprite_duck);
    sfTexture_destroy(my->texture_duck);
    sfSprite_destroy(my->sprite_cursor);
    sfTexture_destroy(my->texture_cursor);
    sfMusic_destroy(my->music);
    sfRenderWindow_destroy(my->window);
}

void hitbox(hunter *my)
{
    my->button = sfMouseLeft;

    if (sfMouse_getPositionRenderWindow(my->window).x >= my->position_duck.x &&
        sfMouse_getPositionRenderWindow(my->window).x <= my->position_duck.x
        + 258 &&
        sfMouse_getPositionRenderWindow(my->window).y >= my->position_duck.y &&
        sfMouse_getPositionRenderWindow(my->window).y <= my->position_duck.y
        + 149) {
        if (sfMouse_isButtonPressed(my->button) == sfTrue) {
            my->position_duck.x = -300;
            my->position_duck.y = rand () % 900;
        }
    }
}

/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** functions
*/

#ifndef MY_H_
#define MY_H_
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Window/Sensor.h>
#include <SFML/Graphics/Export.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct t_list {
    sfRenderWindow *window;
    sfTexture *texture_background;
    sfTexture *texture_duck;
    sfTexture *texture_cursor;
    sfTexture *texture_back2;
    sfSprite *sprite_back2;
    sfSprite *sprite_background;
    sfSprite *sprite_duck;
    sfSprite *sprite_cursor;
    sfMusic *music;
    sfMusic *mort;
    sfClock *clock;
    sfEvent event;
    int counter;
    int score;
    sfVector2f position_duck;
    sfVector2f cursor;
    sfVector2f vectore;
    sfVideoMode video_mode;
    sfIntRect rect;
    sfIntRect rect2;
    sfIntRect rect3;
    sfMouseButton button;
    sfText *title;
    sfFont *game_over;
} hunter;

//void miss_shots(hunter *my);
void launch(hunter *my);
void display_menu(hunter *my);
int back_screen(hunter *my);
void cursor(hunter *my);
void hitbox(hunter *my);
void posit(hunter *my);
int init_sprites(hunter *my);
int music(hunter *my);
void create_rect(hunter *my);
void button_position(hunter *my);
void open_window(hunter *my);
void close_window(hunter *my);
void destroy(hunter *my);
int error_management(char **av);
#endif

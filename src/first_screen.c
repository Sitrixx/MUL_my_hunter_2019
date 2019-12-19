/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** main screen
*/

#include "../include/my.h"

int back_screen(hunter *my)
{
    //hunter *my;
    if (!my->window)
      return (84);
  //  my->window = sfRenderWindow_create(my->video_mode, "Pokemon Hunter",
    //                                    sfResize | sfClose, NULL);
    my->texture_back2 = sfTexture_createFromFile("./resources/backg2.png", NULL);
    my->sprite_back2 = sfSprite_create();
    sfSprite_setTexture(my->sprite_back2, my->texture_back2, sfTrue);
    //sfRenderWindow_drawSprite(my->window, my->sprite_back2, NULL);
    //launch(my);
    //sfRenderWindow_display(my->window);
    return (0);
}

void launch(hunter *my)
{
  sfVector2i position_mouse = {-1, -1};
  int test = 0;

  close_window(my);
  if (sfMouse_isButtonPressed(my->button) == sfTrue && test == 0) {
      position_mouse = sfMouse_getPositionRenderWindow(my->window);
      test = 1;
  }
  if (sfMouse_isButtonPressed(my->button) == sfFalse && test == 1)
      test = 0;
      printf("%d\n", test);
  if (test == 1 && position_mouse.x >= 0 && position_mouse.x <= 1920
      && position_mouse.y >= 0 && position_mouse.y <= 1080) {
        printf("%d\n", test);
        open_window(my);
  //    sfSprite_destroy(my->sprite_back2);
    //  sfTexture_destroy(my->texture_back2);
    }
}
void display_menu(hunter *my)
{
    back_screen(my);
    sfRenderWindow_drawSprite(my->window, my->sprite_back2, NULL);
    launch(my);
    sfRenderWindow_display(my->window);
}

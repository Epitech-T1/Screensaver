/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** screensaver
*/

#include "../include/framebuffer.h"

static int init_info(info_t *value)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    value->window = sfRenderWindow_create(video_mode, "Screensaver",
        sfResize | sfClose, NULL);
    if (!value->window)
        return (84);
    value->texture = sfTexture_create(1920, 1080);
    value->sprite = sfSprite_create();
    value->framebuffer = fram_creat(1920, 1080);
    return (0);
}

static void free_all(info_t *value)
{
    free(value->framebuffer->pixels);
    free(value->framebuffer);
    sfTexture_destroy(value->texture);
    sfSprite_destroy(value->sprite);
    sfRenderWindow_destroy(value->window);
    free(value);
}

static int screensaver(char *str)
{
    info_t *value = malloc(sizeof(info_t));
    if (init_info(value) == 84)
        return (84);
    sfRenderWindow_setFramerateLimit(value->window, 60);
    while (sfRenderWindow_isOpen(value->window)) {
        sfTexture_updateFromPixels(value->texture, value->framebuffer->pixels,
            1920, 1080, 0, 0);
        sfSprite_setTexture(value->sprite, value->texture, sfTrue);
        while (sfRenderWindow_pollEvent(value->window, &value->event)) {
            if (value->event.type == sfEvtClosed)
                sfRenderWindow_close(value->window);
        }
        sfRenderWindow_clear(value->window, sfBlack);
        select_mode(str, value);
        sfRenderWindow_drawSprite(value->window, value->sprite, NULL);
        sfRenderWindow_display(value->window);
    }
    free_all(value);
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 1)
        return (84);
    if (av[1][0] == '-') {
        select_mode_2(av[1]);
        return (0);
    }
    if (ac != 2 || (av[1][0] < 49 || av[1][0] > 52) || screensaver(av[1]) == 84)
        return (84);
    return (0);
}

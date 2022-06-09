/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** draw
*/

#include "../include/framebuffer.h"

int draw_mul_circle(framebuffer_t *framebuffer, int radius)
{
    sfVector2i position;

    position.x = rand() % 1080;
    position.y = rand() % 1920;

    dw_ce(framebuffer, position, radius);
    return (0);
}

int dw_ce(framebuffer_t *framebuffer, sfVector2i position, int radius)
{
    int red = rand() % 255;
    int green = rand() % 255;
    int blue = rand() % 255;
    int opacity = rand() % 255;

    for (int i = position.y-radius; i <= position.y+radius; i++) {
        for (int j = position.x-radius; j <= position.x+radius; j++) {
            if (pow(j - position.x, 2) + pow(i - position.y, 2) <=
                    pow(radius, 2))
                pixel(framebuffer, i, j,  sfColor_fromRGBA(red, green,
                    blue, opacity));
        }
    }
    return (0);
}

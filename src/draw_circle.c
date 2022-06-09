/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** draw_circle
*/

#include "../include/framebuffer.h"

int get_position(framebuffer_t *framebuffer)
{
    sfVector2i position;
    static int radius = 10;

    radius += 5;
    position.x = 1080 / 2;
    position.y = 1920 / 2;
    if (radius == 500)
        radius = 0;
    draw_circle(framebuffer, position, radius);
    return (0);
}

int draw_circle(framebuffer_t *framebuffer, sfVector2i position, int radius)
{
    int red = 255;
    static int green = 0;
    static int blue = 0;
    int opacity = 255 + 1;

    green += 1;
    blue += 1;
    if (green == 251)
        green = 0;
    if (blue == 251)
        blue = 0;
    for (int i = position.y-radius; i <= position.y+radius; i++) {
        for (int j = position.x-radius; j <= position.x+radius; j++) {
            if (pow(j - position.x, 2) + pow(i - position.y, 2) <= pow(radius,
                    2))
                pixel(framebuffer, i, j,  sfColor_fromRGBA(red, green,
                    blue, opacity));
        }
    }
    return (0);
}

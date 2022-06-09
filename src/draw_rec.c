/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** draw_rec
*/

#include "../include/framebuffer.h"

int draw_rec(framebuffer_t *framebuffer)
{
    static int x = 0;
    static int y = 0;

    x += 10;
    y += 6;
    if (x >= 1920)
        x = 0;
    if (y >= 1080)
        y = 0;
    rectangle(framebuffer, x, y);
    return (0);
}

int rectangle(framebuffer_t *framebuffer, int x, int y)
{
    static int red = 150;
    static int green = 0;
    int blue = 200;
    int opacity = 200;

    red += 1;
    green += 1;
    if (red == 255)
        red = 0;
    if (green == 255)
        green = 0;
    for (int i = 0; i <= x; i++) {
        for (int j = 0; j <= y; j++) {
            pixel(framebuffer, i, j, sfColor_fromRGBA(red, green, blue,
            opacity));
        }
    }
    return (0);
}

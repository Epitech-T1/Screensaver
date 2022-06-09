/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** stars
*/

#include "../include/framebuffer.h"

void draw_pixel(framebuffer_t *framebuffer)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    int red = rand() % 255 + 1;
    int green = rand() % 255 + 1;
    int blue = rand() % 255 + 1;
    int opacity = rand() % 255 + 1;

    pixel(framebuffer, x, y, sfColor_fromRGBA(red, green, blue, opacity));
}

void pixel(framebuffer_t *framebuffer, int x, int y, sfColor color)
{
    if (x >= 0 && x <= 1920 && y >= 0 && y <= 1080) {
        x *= 4;
        y *= 4;
        framebuffer->pixels[framebuffer->width * y + x] = color.r;
        framebuffer->pixels[framebuffer->width * y + x + 1] = color.a;
        framebuffer->pixels[framebuffer->width * y + x + 2] = color.g;
        framebuffer->pixels[framebuffer->width * y + x + 3] = color.b;
    }
}

framebuffer_t *fram_creat(const unsigned int width, const unsigned int height)
{
    int len_framebuffer = (width * height) * 4;
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));
    sfUint8 *pixels = malloc(sizeof(*pixels) * len_framebuffer);

    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = pixels;
    for (unsigned int i = 0; i < len_framebuffer; i += 4) {
        framebuffer->pixels[i] = 0;
        framebuffer->pixels[i + 1] = 0;
        framebuffer->pixels[i + 2] = 0;
        framebuffer->pixels[i + 3] = 255;
    }
    return (framebuffer);
}

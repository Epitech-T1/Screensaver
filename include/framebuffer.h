/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** my
*/

#ifndef FRAMEBUFFER_H_
#define FRAMEBUFFER_H_

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <SFML/System.h>
#include <SFML/Graphics/Color.h>

typedef struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} framebuffer_t;

typedef struct info {
    sfRenderWindow *window;
    sfTexture *texture;
    sfSprite *sprite;
    sfEvent event;
    framebuffer_t *framebuffer;
} info_t;


framebuffer_t *fram_creat(const unsigned int width, const unsigned int height);
void pixel(framebuffer_t *framebuffer, int x, int y, sfColor color);
void draw_pixel(framebuffer_t *framebuffer);
int get_position(framebuffer_t *framebuffer);
int draw_circle(framebuffer_t *framebuffer, sfVector2i position, int radius);
int draw_rectangle(framebuffer_t *framebuffer);
int calc_rectangle(framebuffer_t *framebuffer, int x, int y);
int draw_mul_circle(framebuffer_t *framebuffer, int radius);
int dw_ce(framebuffer_t *framebuffer, sfVector2i position, int radius);
int draw_rec(framebuffer_t *framebuffer);
int rectangle(framebuffer_t *framebuffer, int x, int y);
int select_mode_2(char *str);
int select_mode(char *str, info_t *value);
int description(void);
int help(void);
int my_strcmp(char const *st1, char const *s2);

#endif /* !FRAMEBUFFER_H_ */

/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** select_mode
*/

#include "../include/framebuffer.h"

int select_mode_2(char *str)
{
    if (my_strcmp(str, "-h") == 0)
        help();
    if (my_strcmp(str, "-d") == 0)
        description();
    return (0);
}

int select_mode(char *str, info_t *value)
{
    switch (str[0]) {
        case '1':
            draw_pixel(value->framebuffer);
            break;
        case '2':
            get_position(value->framebuffer);
            break;
        case '3':
            draw_mul_circle(value->framebuffer, rand () % 20);
            break;
        case '4':
            draw_rec(value->framebuffer);
            break;
        default:
            break;
    }
}

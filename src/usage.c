/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** usage
*/

#include "../include/framebuffer.h"

int description(void)
{
    printf("1: Stars of different colors that appear randomly.\n");
    printf("2: Filled circle that grows and changes color with a second ");
    printf("that grows from the center.\n");
    printf("3: Several circles of different colors are displayed randomly.\n");
    printf("4: Rectangle that increases in size.\n");
    return (0);
}

int help(void)
{
    printf("animation rendering in a CSFML window.\n\n");
    printf("USAGE\n");
    printf(" ./my_screensaver [OPTIONS] animation_id\n");
    printf("  animation_id    ID of the animation to process ");
    printf("(between 1 and 20).\n\n");
    printf("OPTIONS\n");
    printf(" -d               print the description of all the animations ");
    printf("and quit.\n");
    printf(" -h               print the usage and quit.\n\n");
    printf("USER INTERACTIONS\n");
    printf(" LEFT_ARROW       switch to the previous animation.\n");
    printf(" RIGHT_ARROW      switch to the next animation.\n");
    return (0);
}

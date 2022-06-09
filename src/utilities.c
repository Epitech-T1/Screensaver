/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** utilities
*/

int my_strcmp(char const *st1, char const *s2)
{
    int i = 0;

    while (st1[i] == s2[i] && st1[i] != '\0' && s2[i] != '\0') {
        i++;
    }
    return (st1[i] - s2[i]);
}

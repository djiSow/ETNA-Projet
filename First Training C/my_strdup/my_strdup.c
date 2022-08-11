/*
** ETNA PROJECT, 14/04/2022 by sow_d
** /mnt/c/Users/dji/Documents/projetC_part2
** File description:
**      aloue espace pour un string
*/
#include <stdio.h>
#include <stdlib.h>

char *my_strcpy(char *dest, const char *src)
{

    char *i = dest;

    while ( *src != '\0' ) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest ='\0';
    return (i);
}

int my_strlen(const char *str)
{   
    int y = 0;
    while ( str[y]) {
         y++;
    }
    return y;

}

char *my_strdup(const char *src)
{

   char *dest = malloc(sizeof(my_strlen(src)));
   dest = my_strcpy(dest, src);
   return dest;
}

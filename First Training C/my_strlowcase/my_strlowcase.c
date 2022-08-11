/*
** ETNA PROJECT, $2022
** $MY_STRUPERCASE
** File description:
** 	met un string en majuscule
*/
#include <stdio.h>

char *my_strlowcase(char *str){

    for ( int i = 0; str[i]; i++)
    {   
         if (str[i] >= 'A' && str[i] <= 'Z' ){

        str[i] = (str[i] + 32);
        }
    }
    return str;
}


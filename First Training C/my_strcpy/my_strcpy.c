/*
** ETNA PROJECT, $2022
** $MY_ISNEG
** File description:
** 		affiche si valeur rentré negative
*/
//#include <stdio.h>
char *my_strcpy(char *dest, const char *src){

    char *i = dest;

    while ( *src != '\0' ) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest ='\0';
    return (i);
}

//int main(){
//char src[] = "bojour";
//char dest[5];
//printf("%s\n", strcpy(dest, src));
//}
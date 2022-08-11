/*
** ETNA PROJECT, $2022
** $MY_STRCAT
** File description:
** 	affiche str ?
*/

int my_strlen(const char *str) {   
    int y = 0;
    while ( str[y]) {
         y++;
    }
    return y;
}

char *my_strcat(char *dest, const char *src) {

    int i;
    int len = my_strlen(dest);

    for (  i = 0; src[i]; i++) {

        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';
    return dest;
}


/*
** ETNA PROJECT, $2022
** $MY_STRNCPY
** File description:
** 	cpy nbr
*/
char *my_strncpy(char *dest, const char *src, int n) {
    int i = 0;
   for ( i = 0; i < n && src[i] != '\0'; i++){
        dest[i] = src[i];
    }
   for ( ; i < n; i++){
            dest[i] = '\0';
    }
   return (dest);
}

/*
** ETNA PROJECT, $2022
** $MY_STRNCAT
** File description:
** 	affiche str l'un apres l'autre selon le nom
*/

int my_strlen(const char *str) {   
    int y = 0;
    while ( str[y]) {
         y++;
    }
    return y;
}

char *my_strncat(char *dest, const char *src, int nb) {

    int len = my_strlen(dest);
    int i;

   for (i = 0 ; i < nb && src[i] != '\0' ; i++){
        dest[len + i] = src[i];
   }
    dest[len + i] = '\0';

   return dest;
}

/* int main() {
char dest[] = "bojour";
char src[] = "auvoir";
int n = 3;
printf("%s\n", my_strncat(dest, src, n));
printf("%s\n", strncat(dest, src, n));
return(0);
} */
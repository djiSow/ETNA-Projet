/*
** ETNA PROJECT, $2022
** $MY_STRLEN
** File description:
** 		affiche longueur string
*/
//void my_putchar();
int my_strlen(const char *str)
{   
    int y = 0;
    while ( str[y]) {
         y++;
    }
    return y;

}

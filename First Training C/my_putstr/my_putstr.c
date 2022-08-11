/*
** ETNA PROJECT, $2022
** $MY_PUTSTR
** File description:
** 		print chaque caractere a la lgine ?
*/
void my_putchar();

void my_putstr(const char *str) {
    
    int y = 0;
    while (str[y])
    {
        my_putchar(str[y]);
        y++;
    }
}

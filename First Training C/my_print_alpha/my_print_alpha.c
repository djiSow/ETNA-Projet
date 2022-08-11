/*
** ETNA PROJECT, $2022
** $MY_PRINT_ALPHA
** File description:
** 		print alphabet
*/
void my_putchar();

void my_print_alpha(void)
{

    char ln = '\n';

    for ( char ch = 'a' ; ch <= 'z' ; ch++ ) {
        my_putchar( ch );
    }
    my_putchar( ln );
}

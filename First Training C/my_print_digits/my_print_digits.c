/*
** ETNA PROJECT, $2022
** $MY_PRINT_DIGITS
** File description:
** 		print les nombres
*/
void my_putchar(char c);

void my_print_digits(void)
{
    char ch ;

    for ( ch = '0' ; ch <= '9' ; ch ++ ) {
      my_putchar ( ch );
    }
}




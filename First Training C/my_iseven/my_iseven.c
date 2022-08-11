/*
** ETNA PROJECT, $2022
** $MY_ISEVEN
** File description:
** 		paire ou impair
*/
void my_putchar();

void my_iseven(int n)
{
    if (n % 2 == 0){
        my_putchar('E');
    }
    else {
        my_putchar('O');
    }
}


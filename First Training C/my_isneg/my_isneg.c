/*
** ETNA PROJECT, $2022
** $MY_ISNEG
** File description:
** 		affiche si valeur rentré negative
*/
void my_putchar();

void my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    }
    else {
        my_putchar('P');
    }
}

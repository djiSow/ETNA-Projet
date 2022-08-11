/*
** ETNA PROJECT, $2022
** $MY_PRINT_REVALPHA
** File description:
** 		print alphabet a l'nevers
*/
void my_putchar();

void my_print_revalpha(void)
{
    char ch = 'z';

    for (; ch >= 'a' ; ch-- )
    {
        my_putchar( ch );
    }
    
}


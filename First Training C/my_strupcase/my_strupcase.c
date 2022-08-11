/*
** ETNA PROJECT, $2022
** $MY_STRUPERCASE
** File description:
** 	met un string en majuscule
*/

char *my_strupcase(char *str){

    for ( int i = 0; str[i]; i++)
    {   
        if (str[i] <= 'z' && str[i] >= 'a' ){

        str[i] = (str[i] - 32);
        }
    }
    return str;
}

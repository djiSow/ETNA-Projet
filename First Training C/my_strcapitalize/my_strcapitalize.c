/*
** ETNA PROJECT, $2022
** $MY_STRCAPITALIZE
** File description:
** 	met  premier caracter en majuscule
*/

char *my_strcapitalize(char *str){

    for ( int i = 0; str[i]; i++)
    {   
        if (str[i] >= 'A' && str[i] <= 'Z' ){

        str[i] = (str[i] + 32);
        }
        if ((str[i] <= 'z' && str[i] >= 'a') ){
            if (str[i] == str[0]){
                str[i] = (str[i] - 32);
            }
            else if ( str[i-1] == 32)
                str[i] = (str[i] - 32);
        }
        
    }
    return str;
}

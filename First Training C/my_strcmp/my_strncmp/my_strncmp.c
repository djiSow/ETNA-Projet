/*
** ETNA PROJECT, $2022
** $MY_STRNCMP
** File description:
** 	cpy nbr
*/
//#include <string.h>
//#include <stdio.h>
int my_strncmp(const char *s1, const char *s2, int n){
    int i = 0;
    int r;
    while (i < n && (s1[i] || s2[i])) {

        if (s1[i] != s2[i])  {

            r = s1[i] - s2[i];
            return r;

        }
        i++;
    }
    return r = 0;
}

//int main() {
//char s1[] = "bojour";
//char s2[] = "bojiur";
//int n =4;
//printf("%d\n", my_strncmp(s1, s2, n));
//printf("%d\n", strncmp(s1, s2, n));
//return(0);
//}
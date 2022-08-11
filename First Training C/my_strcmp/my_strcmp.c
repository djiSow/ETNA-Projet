/*
** ETNA PROJECT, $2022
** $MY_STRNCMP
** File description:
** 	cpy nbr
*/

int my_strcmp(const char *s1, const char *s2) {
    int i = 0;
    int r;
    for (; s1[i] || s2[i] != '\0'; i++) {

        if (s1[i] != s2[i])  {
            r = s1[i] - s2[i];
            return r;
        }
    }
    return r = s1[i] - s2[i];
}

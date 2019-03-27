/*
** EPITECH PROJECT, 2018
** my_strcmp
** File description:
** compare two str
*/

int my_strcmp(char *str1, char *str2)
{
    int i = 0;

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] == str2[i])
            i++;
        else
            return (1);
    }
    return (0);
}

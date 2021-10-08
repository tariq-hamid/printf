#include "main.h"
#include <stdio.h>

int main(void)
{
    _printf("Hi there!\n");
    printf("Hi there!\n");

    _printf("These are characters: %c, %c, %c, %c \n", 'W', 'n', 'k', 't');
    printf("These are characters: %c, %c, %c, %c \n", 'W', 'n', 'k', 't');

    _printf("These are strings: %s, %s, %s \n", "a string :P", "yea yea", "damn c");
    printf("These are strings: %s, %s, %s \n", "a string :P", "yea yea", "damn c");

    _printf("These are percent signs: %% %% %% %%\n");
    printf("These are percent signs: %% %% %% %%\n");

    _printf("Combination of c and s: %c. %s, %c. %s, %c. %s \n", '1', "code", '2', "some bugs", '3', "infinite bugs");
    printf("Combination of c and s: %c. %s, %c. %s, %c. %s \n", '1', "code", '2', "some bugs", '3', "infinite bugs");

    _printf("Combination of c, s, and %%: %% %c. %s, %% %c. %s, %% %c. %s \n", '1', "code", '2', "some bugs", '3', "infinite bugs");
    printf("Combination of c, s, and %%: %% %c. %s, %% %c. %s, %% %c. %s \n", '1', "code", '2', "some bugs", '3', "infinite bugs");

    return (0);
}

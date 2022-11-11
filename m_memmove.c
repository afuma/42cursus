#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libft.h"

// memmove vs memcpy
// tuto : https://stackoverflow.com/questions/4415910/memcpy-vs-memmove

int main(void)
{
    char str1[9] = "aabbccdd";

    printf("The string: %s\n", str1);
    printf("Vrai memcpy: %p\n", memcpy(str1 + 2, str1, 6));
    strcpy_s(str1, sizeof(str1), "aabbccdd");   // reset string
    printf("Moi memcpy: %p\n", memcpy(str1 + 2, str1, 6));
    printf("\n");

    strcpy_s(str1, sizeof(str1), "aabbccdd");   // reset string

    printf("The string: %s\n", str1);
    printf("Vrai memmove: %p\n", memmove(str1 + 2, str1, 6));
    strcpy_s(str1, sizeof(str1), "aabbccdd");   // reset string
    printf("Moi memmove: %p\n", memmove(str1 + 2, str1, 6));
    printf("\n");

    return 0;
}
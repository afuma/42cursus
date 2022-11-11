#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

/* ne peut pas utliser les arguments du main car (l'argument de is_alpha est un integer et non un char)

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        ft_isalpha(argv[0]);
    }

    return 0;
}

*/

int main(void)
{
    printf("Vrai:%d\n", ft_isalpha('a'));
    printf("Moi:%d\n", ft_isalpha('a'));
    printf("\n");

    printf("Vrai:%d\n", ft_isalpha('K'));
    printf("Moi:%d\n", ft_isalpha('K'));
    printf("\n");

    printf("Vrai:%d\n", ft_isalpha('%'));
    printf("Moi:%d\n", ft_isalpha('%'));
    printf("\n");

    printf("Vrai:%d\n", ft_isalpha('1'));
    printf("Moi:%d\n", ft_isalpha('1'));
    printf("\n");

    printf("Vrai:%d\n", ft_isalpha(' '));
    printf("Moi:%d\n", ft_isalpha(' '));
    printf("\n");

    return 0;
}
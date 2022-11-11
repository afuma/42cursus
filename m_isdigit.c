#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

/* ne peut pas utliser les arguments du main car (l'argument de is_digit est un integer et non un char)

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        ft_isdigit(argv[0]);
    }

    return 0;
}

*/

int main(void)
{
    printf("Vrai:%d\n", ft_isdigit('a'));
    printf("Moi:%d\n", ft_isdigit('a'));
    printf("\n");

    printf("Vrai:%d\n", ft_isdigit('K'));
    printf("Moi:%d\n", ft_isdigit('K'));
    printf("\n");

    printf("Vrai:%d\n", ft_isdigit('%'));
    printf("Moi:%d\n", ft_isdigit('%'));
    printf("\n");

    printf("Vrai:%d\n", ft_isdigit('1'));
    printf("Moi:%d\n", ft_isdigit('1'));
    printf("\n");

    printf("Vrai:%d\n", ft_isdigit(' '));
    printf("Moi:%d\n", ft_isdigit(' '));
    printf("\n");

    return 0;
}
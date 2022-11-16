/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_tolower.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:36:26 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/14 18:07:31 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "../libft.h"

int main(void)
{
    printf("Vrai: a %c\n", tolower('a'));
    printf("Moi: a %c\n", ft_tolower('a'));
    printf("\n");

    printf("Vrai: K %c\n", tolower('K'));
    printf("Moi: K %c\n", ft_tolower('K'));
    printf("\n");

    printf("Vrai: pourcent %c\n", tolower('%'));
    printf("Moi: pourcent %c\n", ft_tolower('%'));
    printf("\n");

    printf("Vrai: 1 %c\n", tolower('1'));
    printf("Moi: 1 %c\n", ft_tolower('1'));
    printf("\n");

    printf("Vrai: ' ' %c\n", tolower(' '));
    printf("Moi: ' ' %c\n", ft_tolower(' '));
    printf("\n");

    return 0;
}
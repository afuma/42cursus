/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_toupper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:36:30 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/14 18:06:12 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "../libft.h"

int main(void)
{
    printf("Vrai: a %c\n", toupper('a'));
    printf("Moi: a %c\n", ft_toupper('a'));
    printf("\n");

    printf("Vrai: K %d\n", toupper('K'));
    printf("Moi: K %d\n", ft_toupper('K'));
    printf("\n");

    printf("Vrai: pourcent %c\n", toupper('%'));
    printf("Moi: pourcent %c\n", ft_toupper('%'));
    printf("\n");

    printf("Vrai: 1 %c\n", toupper('1'));
    printf("Moi: 1 %c\n", ft_toupper('1'));
    printf("\n");

    printf("Vrai: ' ' %c\n", toupper(' '));
    printf("Moi: ' ' %c\n", ft_toupper(' '));
    printf("\n");

    return 0;
}

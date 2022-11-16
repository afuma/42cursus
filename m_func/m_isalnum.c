/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_isalnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:34:17 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/14 15:34:19 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

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
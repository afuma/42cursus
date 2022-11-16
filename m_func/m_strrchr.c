/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:36:21 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/14 19:30:54 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../libft.h"

int main(void)
{
    printf("Vrai:%p\n", strrchr("a", 'l'));
    printf("Moi:%p\n", ft_strrchr("a", 'l'));
    printf("\n");

    printf("Vrai:%p\n", strrchr("bonjour", 'f'));
    printf("Moi:%p\n", ft_strrchr("bonjour", 'f'));
    printf("\n");

    printf("Vrai:%p\n", strrchr("bonjour", 'u'));
    printf("Moi:%p\n", ft_strrchr("bonjour", 'u'));
    printf("\n");

    printf("Vrai:%p\n", strrchr("pas", 'p'));
    printf("Moi:%p\n", ft_strrchr("pas", 'p'));
    printf("\n");

    printf("Vrai:%p\n", strrchr(" ", 'f'));
    printf("Moi:%p\n", ft_strrchr(" ", 'f'));
    printf("\n");

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_strnstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:36:16 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/14 15:36:18 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../libft.h"

int main(void)
{
    printf("Vrai:%p\n", strrchr("a", "fo"));
    printf("Moi:%p\n", ft_strrchr("a", "fo"));
    printf("\n");

    printf("Vrai:%p\n", strrchr("bonjour", "bo"));
    printf("Moi:%p\n", ft_strrchr("bonjour", "bo"));
    printf("\n");

    printf("Vrai:%p\n", strrchr("bonjour", "ur"));
    printf("Moi:%p\n", ft_strrchr("bonjour", "ur"));
    printf("\n");
    
    printf("Vrai:%p\n", strrchr("bonjour", "r"));
    printf("Moi:%p\n", ft_strrchr("bonjour", "r"));
    printf("\n");

    printf("Vrai:%p\n", strrchr("pas", "a"));
    printf("Moi:%p\n", ft_strrchr("pas", "a"));
    printf("\n");
    
    printf("Vrai:%p\n", strrchr("pas", "a"));
    printf("Moi:%p\n", ft_strrchr("pas", "a"));
    printf("\n");

    printf("Vrai:%p\n", strrchr(" ", "f"));
    printf("Moi:%p\n", ft_strrchr(" ", "f"));
    printf("\n");

    return 0;
}

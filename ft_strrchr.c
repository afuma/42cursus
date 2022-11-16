/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:51:23 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/15 19:23:47 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int n;

    n = (int) ft_strlen(s); // n ne prends pas le \0 en compte car le strlen ne le prends pas en compte non plus. Exemple pour ("pas", 'p'), on a n=3
    while (n >= 0)
    {
        if (s[n] == c)
            return ((char *) (s + n));
        n--;
    }
    return (NULL);
}

// Faire attention au size_t. la valeur ne peut pas etre negative, donc il ne sortira pas de la boucle.
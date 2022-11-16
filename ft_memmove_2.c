/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:49:49 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/16 19:08:03 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *s;
    unsigned char *d;
    size_t i;

    s = (unsigned char *) src;
    d = (unsigned char *) dest;
    i = ft_strlen((unsigned char *) src) + 1;
    // si dest > src, on copie la chaine a l'envers (overlapping)
    if (dest > src)
    {
        while(i >= 0)
        {
            *d = *s;
            i++;
        }
    }
    else
        ft_memcpy(dest, src, n);
}
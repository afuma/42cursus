/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:49:31 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/16 19:04:25 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *s;
    unsigned char *d;
    size_t i;

    s_dest = dest;
    s = (unsigned char *) src;
    d = (unsigned char *) dest;
    i = 0;
    // je crois qu'il n'y a pas de condition sur le \0
    // puisque c'est n bytes (et pas NULL-terminated dans la description)
    while(s[i] != '\0' && i <= n)
    {
        d[i] = s[i];
        i++;
    }

    return (dest);
}
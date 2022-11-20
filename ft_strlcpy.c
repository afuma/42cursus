/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:50:08 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/18 14:27:24 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include "libft.h"
// utiliser le flags de compilation -lbsd

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t len_src;

    len_src = ft_strlen(src);
    if (!src)
        return (0);
    if (size == 0)
    	return (len_src);
    if (size <= len_src)
    {
        ft_memcpy(dst, src, size - 1);
        dst[size - 1] = '\0';
    }
    else
    {
        ft_memcpy(dst, src, len_src);
        dst[len_src] = '\0';
    }
    // c'est le code de will, je suis d'accord si len_src > size
    // on verifie que ce qui est copie ne depasse pas la size
    // mais si len_src < size, alors on dit de copie meme ce les bytes
    // qui ne sont pas de src.(les bytes apres)
    // je ferais plutot: si len_src < size alors faire la copie sur
    // size - len_src bytes: ft_memcpy(dst, src, size - len_src);

    return (len_src);
}

// (pas\0, len_src=3, size=3, on ne peut pas copie le \0, on entre)
// (pas\0, len_src=3, size=4, on peut copier le \0, on entre pas)

/*
-----------------------------------------------------------------
---------------------- CODE ETIENNE PISCINE ---------------------
-----------------------------------------------------------------

#include <stdio.h>

unsigned int	strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
*/
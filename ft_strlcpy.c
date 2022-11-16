/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:50:08 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/16 19:32:45 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include "libft.h"
// utiliser le flags de compilation -lbsd

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t len_src;

    len_src = ft_strlen(src);
    if (!src || !*src)
    	return (0);
    if (size > len_src)
        ft_memcpy(dst, src, size);

    return (len_src);
}

// (pas\0, len_src=3, size=3, on ne peut pas copie le \0, on entre)
// (pas\0, len_src=3, size=4, on peut copier le \0, on entre pas)

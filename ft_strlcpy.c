/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:50:08 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/15 19:23:22 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    if (!src)
    	return (NULL);
    if (*src == '\0')
        return (0);
    if (size <= 0)
        return (strlen(src));
    while(*src != '\0' && i <= size - 1)
    {
        *dst = *src;
        src++;
        dst++;
        i++;
    }
    *dst = '\0';

    return (strlen(src)); //return (i);
}

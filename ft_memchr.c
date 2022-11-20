/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:51:46 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/18 12:11:13 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str;

    str = s;
    while (n-- > 0)
    {
        if (*str == (unsigned char) c)
            return ((void *) str);
        str++;
    }
    
    return (NULL);
}

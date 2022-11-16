/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:51:46 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/16 16:48:51 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    unsigned char letter;
    size_t i;

    str = (unsigned char *) s;
    letter = (unsigned char) c;
    i = 0;
    while (i < n)
    {
        if (*str == letter)
            return (str);
        i++;
    }
    return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:52:09 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/29 21:45:38 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t len_little;

    len_little = ft_strlen(little);
    if (!*little)
        return ((char *) big);
    while(*big && len-- >= len_little )
    {
        if (!ft_strncmp(big, little, len_little))
            return ((char *) big);
        big++;
    }
    
    return (NULL);
}
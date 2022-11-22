/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:08:32 by blax              #+#    #+#             */
/*   Updated: 2022/11/19 19:08:32 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *nstr;
    int size_nstr;
    unsigned int len_s;

    len_s = ft_strlen(s);
    if (start > len_s + 1) // cas d'erreur a verifier
        return (NULL); // a revoir ici
    size_nstr = len_s - start;
    if (size_nstr > (int) len)
        size_nstr = len;
    // if (size_nstr < 0 || size_nstr >= (int) len)
    //  size_nstr = len;
    nstr = malloc(sizeof(char) * (size_nstr + 1));
    if (!nstr)
        return(NULL);
    
    ft_strlcpy(nstr, s + start, size_nstr + 1);
    
    return (nstr);
}
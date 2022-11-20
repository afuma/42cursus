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
    unsigned int size_nstr;
    unsigned int len_s;

    len_s = ft_strlen(s);
    if (len_s - start < len)
        size_nstr = len_s - start;
    else
        size_nstr = len;

    // je pense qu'avec la fonction strndup() ca devrait fonctionner
    nstr = malloc(sizeof(char) * size_nstr);
    if (!nstr)
        return(NULL);
    
    // renvoie la taille de la chaine a creer, on ne la prends pas en compte
    ft_strlcpy(nstr, s + start, size_nstr);
    
    return (nstr);
}
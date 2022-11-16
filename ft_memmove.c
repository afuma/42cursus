/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:49:49 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/16 18:21:52 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    // ----- Help ------


    /*ATTENTION: comment savoir si le pointeur tmp n'est pas elle, en overlap sur la source
    1- une possibilite serais de comparer les adresse des pointeurs et de leurs ajouter n bytes,
    ce qui serais une solution tres acceptable.
    2- la seconde possibilite serais de voir si les valeurs des pointeurs ont une valeur qui serait celle
    de la chaine src ou dest. ce qui serais assez laborieux niveau memoire
    */

    // on copie src dans tmp, puis on copie tmp dans dest
    void *s_dest;
    unsigned char *s_tmp;
    unsigned char *s;
    unsigned char *d;
    unsigned char *tmp;
    size_t i;

    s = (unsigned char *) src;
    d = (unsigned char *) dest;
    i = 0;
    // de meme qu'en haut pour le \0

    if (dest > src)
    {
        tmp = dest + ft_strlen(dest) + 1;
        tmp = malloc(ft_strlen(dest) + 1);
    }
    else
    {
        tmp = s + ft_strlen((const char *) s) + 1;
        // tmp = (unsigned char *) (s + ft_strlen((const char *) s) + 1);
        tmp = malloc(ft_strlen((const char *) s) + 1);
    }
    
    if(!tmp)
        return (NULL);
    // faire un malloc de tmp

    s_tmp = tmp;
    s_dest = dest;
    // on copie n bytes, il n'y a pas de '\0'
    while(i <= n)
    {
        *tmp = *s;
        s++;
        tmp++;
        i++;
    }
    i = 0;
    while(i <= n)
    {
        *d = *s_tmp;
        s_tmp++;
        d++;
        i++;
    }

    return ((void *) s_dest);
}

// pour le memmove de Will, il faut copier dans un tableau temporaire
// a ce moment la, il n'y aura pas d'overlapping normalement( en supposant 
// que la heap ne prenne pas en memoire une place deja prise ( par dest ))
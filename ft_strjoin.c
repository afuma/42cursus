/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:16:21 by blax              #+#    #+#             */
/*   Updated: 2022/11/19 18:16:21 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *nstr;
    unsigned int len_s1;
    unsigned int len_s2;
    unsigned int size_nstr;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    size_nstr = len_s1 + len_s2 + 1;
    nstr = malloc(sizeof(char) * size_nstr);
    if (!nstr)
        return(NULL);

    ft_strlcat(s1, s2, size_nstr);
    ft_strlcat(nstr, s1, size_nstr);

    return (nstr);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:18:49 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/16 16:55:50 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ref: https://searchcode.com/codesearch/view/20641602/

// A REVOIR

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    
    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = (void *) malloc(nmemb * size);
    // a voir pour initialiser a 0, ptr[i] prends size bytes ou -> 1 bytes <-
    if (!ptr)
        return (NULL);
    
    ft_bzero(ptr, nmemb * size);

    return (ptr);
}
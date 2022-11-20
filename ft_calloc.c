/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:18:49 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/18 15:27:39 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ref: https://searchcode.com/codesearch/view/20641602/

// A REVOIR

#include <stdint.h>
#include "libft.h"

/*

char str[] = {'1', '1', '1', '1'} -> 4, 1 ou 1, 4, ou 2, 2
faire les tests

---------------- Moi -------------------
nmemb * size < SIZE_MAX
size < ((size_t) / nmemb)

---------------- Pote a Oceane -----------
size < ((size_t) - 1 / nmemb)
size * nmemb + 1 < SIZE_MAX // si (size_t) = SIZE_MAX
prendrai visiblement le caractere null en plus, je ne sais pas 
si cela est utile ()

----------------- Verfier la valeur de size_max = -1 -----------
*/

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    
    if (nmemb > SIZE_MAX / size)
        return (NULL);
        
    if (nmemb == 0 || size == 0)
    {
        ptr = malloc(1);
        ((unsigned char *)ptr)[0] = 0;
        return (ptr);
    }
    ptr = (void *) malloc(nmemb * size);
    // a voir pour initialiser a 0, ptr[i] prends size bytes ou -> 1 bytes <-
    if (!ptr)
        return (NULL);
    
    ft_bzero(ptr, nmemb * size);

    return (ptr);
}
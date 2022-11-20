/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:50:34 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/20 17:07:06 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ajouter strlen

/*
La logique du programme (grace a domingo), est qu'on ajoute a la dest
et non a la source. on a une destination, et on la complete pour qu'elle
devienne une plus grande destination. Et effectivement, dans le man: 
"The strlcat() function appends the NUL-terminated string src to the end of dst."
*/

// conseil de alain hercalt, tester la fonction en meme temps qu'on la cree

/* Pour le main:

Faire les tests avec les 3 variables:
Valeurs retourner avec mon code:

    strlcat("abcd", "efg", 2); -> strlen(dst)
    strlcat("abc", "defg", 2); -> strlen(dst)
    strlcat("", "defg", 2); -> strlen(dst) = 0
    strlcat(" ", "", 2); -> strlen(dst)
    strlcat("", " ", 2); -> strlen(dst)
    strlcat("abc", "defg", 7); -> 
    strlcat("abc", "defg", 0); -> 
    strlcat("abc", "defg", 3); -> 
    strlcat("a", "defg", 5); -> 
    strlcat("a", "defg", 7); -> 
    strlcat("abcdef", "g", 7); -> 
    strlcat("abcdef", "g", 3); -> 

*/

#include <bsd/string.h>
// IMPORTANT: utilisez ce flag pour la compilation: -lbsd
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  init_dst_len;

    i = 0;
    // if (!dst) // si dst n'est pas une zone memoire alloue(de disponible)
    //     return (strlen(dst)); // retourne 0 ou peut segfault car la fonction strlen tente d'acceder a la valeur null '\0' qui n'existe pas
    init_dst_len = ft_strlen(dst);
    /* si la taille de dest est plus grande que size, 
        ca signifie qu'il y a une erreur, 
        car la size represente la taille total
        voir man: "the full size of the buffer"
        -> on retourne ce qui est cense etre creer : la petite dest(celle sans src)
    */
    // les 2 premieres conditions si dessous,
    // represente la taille de la chaine qui doit etre creer
    // mais ce sont bien des "erreurs"
    if (init_dst_len >= size)
        return (size + ft_strlen(src));
    if (!size)
        return (init_dst_len + ft_strlen(src));
    while (src[i] != '\0' && i < (size - init_dst_len - 1)) // size - 1 parce que le size contient le NUL-terminated
    {
        dst[init_dst_len + i] = src[i];
        i++;
    }
    dst[init_dst_len + i] = '\0'; // dit dans le man
    // fonction de debuggage a compare avec strlen(dst)
    // pour voir la difference entre la chaine creer et la chaine qui aurait du etre creer
    return (init_dst_len + ft_strlen(src));
}

/*
la difference avec strncat est que:
dans la traduction francaise du man on a:
"Si src contient n octets ou plus, 
strncat() écrit n+1 octets dans dest (n de src plus l'octet nul de fin).
Par conséquent, la taille de dest doit être au moins égale à strlen(dest)+n+1."
 
Mais si la memoire ne le permet pas, alors il peut y avoir des erreurs d'overflow
alors que strlcat empeche cette situation de se produire, car on sait a l'avance
combien d'octet il nous reste pour concatener src a dst: c'est "size - init_dst_len - 1"
avec init_dst_len = strlen(dst)
*/

/* j'ai bien fait de demander a domingo et alain,
parce que je n'avais pas compris:
1) ce qu'etait la size(je pensais que c'etait la meme que dans la fonction strncat)
c'est a dire la taille de src et non la taille globale
2) que l'on ajouter src a dest et non l'inverse(dst a src)
3) qu'elle difference fondamentale il y avait avec strncat(fonction du meme "registre"), mais plus faible en termes de securite
*/


/*
-----------------------------------------------------------------------------------
------------------------------ STRLCAT DE WILL ---------------------------------
-----------------------------------------------------------------------------------

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t srclen;
	size_t dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (srclen < size - dstlen)
	{
		ft_memcpy(dst + dstlen, src, srclen);
		dst[dstlen + srclen] = '\0';
	}
	else
	{
		ft_memcpy(dst + dstlen, src, size - dstlen - 1);
		dst[size - 1] = '\0';
	}
	return (dstlen + srclen);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:48:32 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/13 18:06:35 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
    /* man: checks whether c is a 7-bit unsigned char value that  fits  into
              the ASCII character set.
    */
    return (c >= 0 && c <= 127);
}
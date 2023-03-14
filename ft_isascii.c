/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:08:06 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:08:13 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int c) 
{
    return (c >= 0 && c <= 127);
}

int main() 
{
    char c = 'a';
    if (ft_isascii(c)) 
    {
        printf("%c is a 7-bit ASCII character.\n", c);
    } else 
    {
        printf("%c is not a 7-bit ASCII character.\n", c);
    }
    return 0;
}

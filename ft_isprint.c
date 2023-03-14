/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:08:54 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:08:58 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isprint(int c) 
{
    return (c >= 32 && c <= 126);
}

int main() 
{
    char c = 'a';

    if (ft_isprint(c)) 
    {
        printf("%c is a printable character\n", c);
    } else 
    {
        printf("%c is not a printable character\n", c);
    }

    return 0;
}

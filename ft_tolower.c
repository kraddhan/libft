/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:25:59 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:26:02 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_tolower(char ch) 
{
    if (ch >= 'A' && ch <= 'Z') 
    {
        return ch + ('a' - 'A');
    } 
    else 
    {
        return ch;
    }
}

int main() 
{
    char ch = 'G';
    char lowercase_ch = ft_tolower(ch);
    printf("Original character: %c\n", ch);
    printf("Lowercase character: %c\n", lowercase_ch);
    return 0;
}

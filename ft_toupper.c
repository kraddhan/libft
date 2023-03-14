/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:26:11 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:26:14 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_toupper(char ch) 
{
    if (ch >= 'a' && ch <= 'z') 
    {
        return ch - 32;  // convert lowercase to uppercase
    } 
    else 
    {
        return ch;  // return the character unchanged
    }
}

int main() 
{
    char ch = 'a';  // character to be converted to uppercase

    ch = ft_toupper(ch);  // convert ch to uppercase

    printf("Uppercase equivalent of the character is %c\n", ch);

    return 0;
}

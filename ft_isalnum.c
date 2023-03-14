/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:07:07 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:07:28 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(char c) 
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) 
    {
        return 1;
    } else 
    {
        return 0;
    }
}

int main() 
{
    char c = '5';
    if (ft_isalnum(c)) 
    {
        printf("%c is a letter or a digit.\n", c);
    } else 
    {
        printf("%c is neither a letter nor a digit.\n", c);
    }
    return 0;
}

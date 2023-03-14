/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:08:33 by kraddhan          #+#    #+#             */
/*   Updated: 2023/03/14 20:14:41 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_isdigit(char c) 
{
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

/*
int main() 
{
    char c = '5';
    if (ft_isdigit(c)) 
    {
        printf("%c is a digit.\n", c);
    } else 
    {
        printf("%c is not a digit.\n", c);
    
    return 0;
    }
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:24:29 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:24:34 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(const char *str) 
{
    int length = 0;
    while (*str != '\0') 
    { // loop until the end of the string
        length++; // increment the length for each character
        str++; // move to the next character
    }
    return length;
}

int main() 
{
    char str[] = "Hello, world!"; // declare and initialize a string
    int length = ft_strlen(str); // get the length of the string

    printf("The length of the string is %d\n", length);

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:20:55 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:21:01 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char* ft_strchr(const char* str, int c) 
{
    while (*str != '\0') 
    {
        if (*str == c) 
        {
            return (char*)str;
        }
        str++;
    }
    if (c == '\0') 
    {
        return (char*)str;
    }
    return NULL;
}

int main() 
{
    const char* str = "hello world";
    int c = 'o';
    char* ptr = ft_strchr(str, c);
    if (ptr) 
    {
        printf("'%c' found at position %ld\n", c, ptr - str);
    } 
    else 
    {
        printf("'%c' not found\n", c);
    }
    return 0;
}

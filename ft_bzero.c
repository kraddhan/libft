/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:05:51 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:06:11 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n) 
{
    unsigned char *p = s;
    while (n--) 
    {
        *p++ = 0;
    }
}

int main() 
{
    char str1[] = "hello world";
    char str2[] = "hello world";
    int len = strlen(str1);
    
    // Using myBzero to set str1 to all zeros
    ft_bzero(str1, len);
    printf("After myBzero: %s\n", str1);
    
    // Using bzero to set str2 to all zeros
    ft_bzero(str2, len);
    printf("After bzero: %s\n", str2);
    
    // Comparing the output of myBzero and bzero
    if (memcmp(str1, str2, len) == 0) 
    {
        printf("myBzero and bzero produced the same output\n");
    } 
    else 
    {
        printf("myBzero and bzero produced different output\n");
    }
    
    return 0;
}

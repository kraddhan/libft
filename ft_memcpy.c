/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:10:00 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:10:06 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_memcpy(void *dest, const void *src, size_t n) 
{
    // Cast the void pointers to unsigned char pointers
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    // Copy n bytes from source to destination
    for (size_t i = 0; i < n; i++) 
    {
        d[i] = s[i];
    }
}

int main() 
{
    char str1[] = "Hello, world!";
    char str2[20];

    ft_memcpy(str2, str1, sizeof(str1));
    printf("str2: %s\n", str2);

    return 0;
}

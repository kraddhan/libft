/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:43:16 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/18 10:43:16 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n) 
{
    const unsigned char *p = s;
    for (size_t i = 0; i < n; i++) 
    {
        if (p[i] == (unsigned char) c) 
        {
            return (void *) &p[i];
        }
    }
    return (0);
}

#include <stdio.h>

int main()
{
    const void *s = "Hello, World!";
    int c = '.';
    size_t n = 10;
    
    if(ft_memchr(s, c, n))
    {
        printf("%c found", c);
    }
    else
        printf("%c no where in string\n", c);
    
    return (0);

}
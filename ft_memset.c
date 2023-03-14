/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:20:19 by kraddhan          #+#    #+#             */
/*   Updated: 2023/03/14 20:34:25 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void ft_memset(void *s, int c, size_t n)
{
    unsigned char *p = s;
    while (n--)
    {
        *p++ = (unsigned char)c;
    }
}

/*
int main()
{
    char str[50] = "Hello, world!";
    int n = strlen(str);

    // Set str to all zeros using myMemset
    ft_memset(str, 0, n);

    // Verify that str is all zeros
    for (int i = 0; i < n; i++) 
    {
        if (str[i] != 0) 
        {
            printf("Error: str[%d] is not zero\n", i);
            return 1;
        }
    }

    printf("ft_memset test passed\n");
    return 0;
}
*/

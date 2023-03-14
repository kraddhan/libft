/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:57:26 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/18 10:57:26 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *myMemmove(void *dest, const void *src, size_t n) 
{
    // Cast void pointers to character pointers
    char *d = dest;
    char *s = (char*)src;

    if (d == s) 
    {
        // If source and destination are the same, no need to copy
        return d;
    }

    if (s + n <= d) 
    {
        // If the source memory region is below the destination,
        // we can safely copy forward without overlapping
        for (size_t i = 0; i < n; i++) 
        {
            d[i] = s[i];
        }
    } 
    else if (d + n <= s) 
    {
        // If the destination memory region is below the source,
        // we can safely copy backward without overlapping
        for (size_t i = n; i > 0; i--) 
        {
            d[i - 1] = s[i - 1];
        }
    } 
    else 
    {
        // If the memory regions overlap, we need to copy in a way that
        // avoids corrupting the source memory while still copying correctly.
        if (d < s) 
        {
            // If the destination is before the source, copy forward
            for (size_t i = 0; i < n; i++) 
            {
                d[i] = s[i];
            }
        } 
        else 
        {
            // If the source is before the destination, copy backward
            for (size_t i = n; i > 0; i--) 
            {
                d[i - 1] = s[i - 1];
            }
        }
    }

    return d;
}

int main() 
{
    char s1[] = "Hello, world!";
    char s2[14];

    myMemmove(s2, s1, sizeof(s1));

    printf("%s\n", s2);

    return 0;
}

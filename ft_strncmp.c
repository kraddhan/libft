/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:24:52 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:25:03 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int myStrncmp(const char *str1, const char *str2, size_t n) 
{
    for (size_t i = 0; i < n; i++) 
    {
        if (str1[i] != str2[i])
            return (str1[i] < str2[i]) ? -1 : 1;
        else if (str1[i] == '\0')
            return 0;
    }
    return 0;
}

int main() 
{
    char *str1 = "Hello";
    char *str2 = "World";
    int res = myStrncmp(str1, str2, 3);
    printf("%d\n", res);
    return 0;
}

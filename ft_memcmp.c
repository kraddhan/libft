/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:03:11 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/18 11:03:11 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = s1, *p2 = s2;
    int result = 0;
    while (n--) {
        if (*p1 != *p2) {
            result = (*p1 > *p2) ? 1 : -1;
            break;
        }
        p1++;
        p2++;
    }
    return result;
}

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    int cmp1 = memcmp(str1, str2, 2);
    int cmp2 = ft_memcmp(str1, str2, 2);
    printf("cmp1=%d, cmp2=%d\n", cmp1, cmp2);
    return 0;
}

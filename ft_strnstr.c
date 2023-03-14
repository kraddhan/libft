/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:06:19 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/18 11:06:19 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char* ft_strnstr(const char* haystack, const char* needle, size_t len) {
    if (*needle == '\0') {
        return (char*) haystack;
    }

    for (size_t i = 0; i < len && haystack[i] != '\0'; i++) {
        if (haystack[i] == needle[0]) {
            size_t j = 1;
            while (j < strlen(needle) && i + j < len && haystack[i+j] == needle[j]) {
                j++;
            }
            if (j == strlen(needle)) {
                return (char*) &haystack[i];
            }
        }
    }

    return NULL;
}

int main() {
    char haystack[] = "The quick brown fox jumps over the lazy dog.";
    char needle[] = "fox";
    char *result = ft_strnstr(haystack, needle, sizeof(haystack));
    if (result == NULL) {
        printf("Needle not found in haystack.\n");
    } else {
        printf("Needle found in haystack at index %ld.\n", result - haystack);
    }

    return 0;
}
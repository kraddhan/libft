/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:36:45 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:23:16 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char* ft_strdup(const char* original) {
    // Get the length of the original string
    int length = 0;
    const char* current = original;
    while (*current++) {
        length++;
    }

    // Allocate memory for the new string
    char* new_string = (char*) malloc(length + 1);

    // Copy the original string into the new memory block
    char* destination = new_string;
    while (*original) {
        *destination++ = *original++;
    }
    *destination = '\0';

    // Return the pointer to the new memory block
    return new_string;
}

int main() {
    char* original_string = "Hello, world!";
    char* duplicate_string = ft_strdup(original_string);

    printf("Original string: %s\n", original_string);
    printf("Duplicate string: %s\n", duplicate_string);

    free(duplicate_string);

    return 0;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:52:36 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/18 14:52:36 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void* ft_calloc(size_t num, size_t size) {
    // Allocate memory using malloc
    void* ptr = malloc(num * size);
    if (ptr == NULL) {
        return NULL; // Return NULL if malloc fails
    }

    // Set all bytes to zero using memset
    memset(ptr, 0, num * size);

    return ptr; // Return pointer to allocated memory
}

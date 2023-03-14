/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:05:08 by kraddhan          #+#    #+#             */
/*   Updated: 2023/03/14 19:35:53 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t strlcpy(char *dest, const char *src, size_t size) {
    size_t src_len = strlen(src);
    size_t copy_len = src_len < size ? src_len : size - 1;
    strncpy(dest, src, copy_len);
    dest[copy_len] = '\0';
    return src_len;
}

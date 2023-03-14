/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:09:11 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/18 11:09:11 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcat(char* dest, const char* src, size_t size) {
    size_t len = strlen(dest);
    size_t src_len = strlen(src);
    size_t copy_len = size - len - 1;

    if (len >= size)
        return size + src_len;

    strncat(dest, src, copy_len);
    dest[size - 1] = '\0';

    return len + src_len;
}
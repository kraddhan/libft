/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:26:40 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/19 22:26:40 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* substr(const char *src, int start, int len) {
  int src_len = strlen(src);
  
  // Check if start and len are within bounds
  if (start >= src_len || start + len > src_len) {
    return NULL;
  }

  // Allocate memory for the destination string
  char *dest = (char*) malloc(len + 1);

  // Copy the substring to the destination string
  strncpy(dest, src + start, len);
  dest[len] = '\0';

  return dest;
}

int main() {
  char str[] = "Hello, World!";
  char *sub;

  sub = substr(str, 7, 5);

  if (sub == NULL) {
    printf("Invalid start index or length.\n");
    return 1;
  }

  printf("%s", sub);  // output: "World"

  free(sub);  // free the dynamically allocated memory

  return 0;
}

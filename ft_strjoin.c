/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:12:18 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 20:30:15 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strjoin(const char* s1, const char* s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char* result = malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		perror("Failed to allocate memory fot strjoin");
		exit(EXIT_FAILURE);
	}

	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 +1);

	return result;
}

int	main()
{
	char*	s1 = "Hello";
	char*	s2 = " World";
	char*	result = strjoin(s1, s2);
	printf("%s\n", result);
	free(result);
	return 0;
}

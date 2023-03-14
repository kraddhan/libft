/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:14:42 by kraddhan          #+#    #+#             */
/*   Updated: 2023/03/14 20:12:50 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
    char c = 'K';

    if(ft_isalpha(c))
    {
        printf("%c is Alphabet.\n", c);
    }
    else
    { 
        printf("%c is not Alpabet\n", c);
    }
    return 0;

}
*/

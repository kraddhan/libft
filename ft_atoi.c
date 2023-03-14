/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:12:58 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/18 11:12:58 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char* str) 
{
    int result = 0;
    int sign = 1;
    int i = 0;
    
    // Check for leading whitespace
    while (isspace(str[i])) 
    {
        i++;
    }
    
    // Check for sign
    if (str[i] == '-' || str[i] == '+') 
    {
        if (str[i] == '-') 
        {
            sign = -1;
        }
        i++;
    }
    
    // Convert digits to integer
    while (isdigit(str[i])) 
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    
    return sign * result;
}
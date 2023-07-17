/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:58:54 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/07 19:24:52 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else 
		return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char c = '3';
//     printf("is it digit %d\n", ft_isdigit(c));
//     printf("is adigit original %d\n",isdigit(c));
//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:15:22 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/07 19:58:36 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char c = 4;
//     printf("ft_isprint : %d\n", ft_isprint(c));
//     printf("the original ft_print : %d\n", isprint(c));

//     return (0);
// }

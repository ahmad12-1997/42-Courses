/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:48:32 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 18:33:51 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char c = 'm';
//     printf("is it ascii %d\n", ft_isascii(c));
//     printf("is alpha ascii %d\n",isascii(c));
//     return (0);
// }

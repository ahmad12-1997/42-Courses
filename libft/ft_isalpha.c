/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:19:12 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/09 19:06:07 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char c = '2';
//     printf("is it alpha %d\n", ft_isalpha(c));
//     printf("is alpha original %d\n",isalpha(c));
//     return (0);
// }
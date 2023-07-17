/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:52:40 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 10:28:51 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	a = b;
	i = 0;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return (b);
}
// //a way of type casting  ((unsigned char *)b)[i] = c;
// int main()
// {
//  	 char str[] = "abasd";
//     ft_memset(str , 'a',3);
// 	memset(str , 'a',3);
//     printf("the str : %s",str);

// }

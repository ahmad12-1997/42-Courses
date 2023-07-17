/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:28:11 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/09 19:40:09 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		if (*ptr == (unsigned char )c)
			return ((void *)ptr);
		ptr++;
		i++;
	}
	return (0);
}
//memchr locates the first occurrence of c;
// int main(void)
// {   
//     //in the above i have to type cast ptr to be able to return it;
//     char *a = "vsd afadaf";
//     printf("the string is : %s",memchr(a,'a',10));
// }

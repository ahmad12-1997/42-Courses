/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:46:02 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/07 19:12:36 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*buffer;

	buffer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		buffer[i] = 0;
		i++;
	}
}
// #include <libc.h>
// int main(void)
// {
//     char buffer[10] = "afdgdfgdf";
//     char ft_buffer[10] = "afdgdfgdf";
//     bzero(buffer,3);     
//     printf("The answer is of original bzero : ");
//     printf("%s   ",buffer);
//     printf("%c",buffer[5]);
//     printf("\n");
//     ft_bzero(ft_buffer,3);
//     printf("The answer is of ft_bzero : ");
//     printf("%s",ft_buffer);
//     printf("%c",ft_buffer[5]);
//     printf("\n");
//     return (0);
// }

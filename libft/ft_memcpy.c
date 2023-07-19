/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:28:54 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/18 19:42:49 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*support_dest;
	const unsigned char	*support_source;

	if (n == 0)
		return (dst);
	support_dest = dst;
	support_source = src;
	if (src == 0 && dst == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		support_dest[i] = support_source[i];
		i++;
	}
	return (dst);
}

//#include <stdlib.h>
//restrict keyword not allowed
//why it return null , if it is void ? 
// because it is returning void function that can be cast to any 
//type of pointer , it is not returning null variable.

//It is const void * because the we want to 
// make sure that the value pointed by pointer src is 
//constant and can not be changed.

//why iam casting dest and src arguments? 
// because I will not be able to coppy values and 
//manuipulate them. 

// //int main(void)
// {   
//test for int array
// printf("Test for int array wiht ft_memcpy\n");
// it is going byte by byte , 
//so if I want to print an int which is 4 bytes
// I should make size , sizeof(int)*num of ints;
//     memcpy(dest_arr,src_arr,20);
//     ft_memcpy(my_dest_arr,src_arr,20);

//     int i = 0;
//     while(i <= 4)
//     {
//         printf("The dest for Original int memcpy dest
// : %d  for source : %d \n",dest_arr[i] , src_arr[i]);
//         i++;
//     }
//     printf("\n");
//     i = 0;
//     while(i <= 4)
//     {
//         printf("The dest for My int ft_memcpy dest
// : %d  for source : %d \n",my_dest_arr[i] , src_arr[i]);
//         i++;
//     }
//     printf("\n");

// test for char array , where iam using the source address
// + 5 and coppy the next 5 letters after it
//  memcpy(dest_char_arr,src_char_arr + 6,10);
//  ft_memcpy(my_dest_char_arr,src_char_arr + 6,10);
//   printf("The answer for Origial memcpy char :
// %s\n",dest_char_arr);
//   printf("The answer for Coppy ft_memcpy char :
// %s\n",my_dest_char_arr);

// }

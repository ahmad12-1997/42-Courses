/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:54:16 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/18 18:33:30 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*support_dest;
	const unsigned char	*support_source;

	if (len == 0)
		return (dst);
	if (src == 0 && dst == 0)
		return (NULL);
	support_dest = dst;
	support_source = src;
	if (dst > src)
	{
		while (len > 0)
		{
			support_dest[len - 1] = support_source[len - 1];
			len--;
		}
	}
	else
	{
		while (len-- > 0)
			*(support_dest++) = *(support_source++);
	}
	return (dst);
}
// int main(void)
// {
// //  overlapping failing test.
// //what is overlapping?
// //memcpy: you are reading from one memory segment and, well,
// //copying it to another 
// //memory segment. If the memory segments coincide at some point,
// // a "overlapping" would occur. 
// //memset: sets a memory segment to a constant value, so,
// //there is no "overlapping" 
// //possible here, because there is just a unique, contiguous, 
// //memory segment to "set".
// //If the memory segments coincide at some point,
// //a "overlapping" would occur.
// //why dest > src ?this special condition to handle
// //where we handle overlapping by coppying backward 
// //as what will happen in ex downside.
//     int array_int[5] = {1,2,3,4,5};
//     int int_memmove[10];
//     int int_ft_memmove[10];
//     char src[] = "Hello!";
//    //memcpy(src + 2,src,3);
//    //printf("Orignal Memcpy with overlapping : %s  .",src);  

//     memmove(src+2,src,5);
//      printf("-Original Memmove : %s\n", src);

//        //ft_memmove(src+2,src,5);
//         //printf("-My ft_memmove : %s .", src);

//         memmove(int_memmove,array_int,sizeof(int)*5);
//         ft_memmove(int_ft_memmove,array_int,sizeof(int)*5);
//         for(int i = 0 ; i < 5 ; i++)
//         {
//  printf("The Original result for Memmove of int array 
//  : %d \n",int_memmove[i]);
//  }
// for(int i = 0 ; i < 5 ; i++)
//   {
// printf("The Original result for MY ft_Memmove of int array : %d
// \n",int_ft_memmove[i]);
//         }
//     return (0);
// }
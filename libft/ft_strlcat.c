/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:20:18 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/11 19:56:16 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dstsize == 0 && dst == NULL)
		return (0);
	dest_len = ft_strlen(dst);
	if (dest_len >= dstsize)
		return (dstsize + src_len);
	i = 0;
	while ((dest_len + i) < (dstsize - 1) && src[i])
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// int main(void)
// {   
//     //IF SIZE IS BIGGER THAN DEST IT 
// //WILL THROUG ERROR ON 
// //THE ORIGINAL BUT NOT HERE BECAUSE OF OVERFLOW
// //the size will be for the whole output string , src + dst
// //and the a 1byte from size will be for the null terminated
// //value
//     char destValue[30] = "Hi My Friend";
//     char destValueOriginal[30] = "Hi My Friend";
//     char srcValue[8] = " Ahmad?";
//     int destlenValue = ft_strlcat(destValue,srcValue,22);
//     int destlenValueOriginal = strlcat(destValueOriginal,
//     srcValue,22);
//     printf("my func :%s\n   num : %d\n",destValue,destlenValue);
//     printf("Original func :%s\n   num : 
//     %d",destValueOriginal,destlenValueOriginal);
//     return (0);
// }

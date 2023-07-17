/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:01:46 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/11 20:21:01 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (dstsize > 0)
	{
		while (src[i] && (i < (dstsize - 1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*int main(void)
{   
    char    value1[] = "afdsfaa";
    char    value2[10] ;
    char    value3[10] ;
    int len = ft_strlcpy(value2,value1,5) ;
	//int len = strlcpy(value,value2,5);
	printf("my func is : %s  with len: %d\n",value2,len);
    int lenn = ft_strlcpy(value3,value1,5) ;
	printf("original func is : %s  wiht len: %d",value3,lenn);
    return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:43:35 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 11:22:36 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > UINT_MAX / size)
		return (NULL);
	ptr = (void *)malloc((unsigned int)count * (unsigned int)size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
// if (size != 0 && count > UINT_MAX / size)
// 		return (NULL);
//his code is a safety check to prevent overflow issues when calculating the
//  total size of an allocation. It ensures that 
// the size of each element is non-zero and that the total size 
// does not exceed the maximum value representable by an unsigned int.mak
//we check for zero so we do not divide by zero in next condtion
//why we did not made count * size > UINT_MAX ?
//to avoid the occurence of overflow in count * size 
//befor comparing it to UINT_MAX
//UINT_MAX:4294967295
// int main(void)
// {
//     char *s;
//     s = (char *)ft_calloc(2,sizeof(int));
//     s[0] = 1;
//     printf("%d",s[0]);
//     free(s);
// }

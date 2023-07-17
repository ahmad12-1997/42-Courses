/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:33:12 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/09 19:41:45 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*temp1;
	const unsigned char	*temp2;

	temp1 = s1;
	temp2 = s2;
	while (n > 0)
	{
		if (*temp1 != *temp2)
			return (*temp1 - *temp2);
		n--;
		temp1++;
		temp2++;
	}
	return (0);
}
// int main()
// {
//     char *s1 = "adaf dAfdfa";
//     char *s2 = "adaf dBfvs";
//     printf("the answer of original func :%d\n",memcmp(s1,s2,10));
//     printf("the answer of my func :%d",ft_memcmp(s1,s2,10));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:52:35 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 16:32:07 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	if (n == 0)
		return (0);
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2; 
	while (n > 0)
	{
		if (*ss1 != *ss2)
			return (*ss1 - *ss2); 
		if (*ss1 == '\0' || *ss2 == '\0')
			return (0);
		ss1++;
		ss2++;
		n--;
	}
	return (0);
}
// int main(void)
// {
//     char string1[] = "Hi Ahmad,How are You";
//     char string2[] = "Hi Ahmad,how are You";
//     int n = 10;
//     int result = ft_strncmp(string1,string2,n);
//     printf("My func :%d\n",result);
//     printf("The Original Func : %d",strncmp(string1,string2,n));
//     return (0);
// }

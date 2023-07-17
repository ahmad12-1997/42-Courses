/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:31:59 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/11 20:39:56 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == 0 || f == 0)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void ftest(unsigned int a , char* c)
// {  
//     printf("%d\n",a);
//     *c = 'i';
// }
// //it should print the index and the letter i 
// int main()
// {
//     char arr[10] = "ahmad";
//     ft_striteri(arr,ftest);
//     printf("the result ptr : %s\n",arr);
//     return (0);
// }

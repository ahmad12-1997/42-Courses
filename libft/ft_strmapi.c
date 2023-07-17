/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:39:56 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/11 20:25:01 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*ptr;

	if (s == 0)
		return (NULL);
	len = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// char ftest(unsigned int a , char c)
// {   
//     char ptr = 'i';
//     printf("the index : %d , the char : %c\n",a ,c);
//     return (ptr);
// }
// int main()
// {
//     char arr[10] = "ahmad";
//     char *arrfinal;
//     arrfinal = ft_strmapi(arr,ftest);
//     printf("the result ptr : %s\n",arrfinal);
//     free(arrfinal);
//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:21:47 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/11 19:57:21 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
// int main(void)
// {
//     //it will locates the first occurrence of a letter.
//     char c = 'a';
//     char *sent = "dfsdvaxfaddd sahmed";
//     printf("the original func: %s\n",strchr(sent , c));
//     printf("My func : %s\n",ft_strchr(sent ,c));
// }

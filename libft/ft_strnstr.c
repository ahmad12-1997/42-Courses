/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:34:06 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/18 18:20:10 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	if (needle[i2] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + i2] != '\0' && haystack[i + i2] == needle[i2] 
			&& (i + i2) < len)
			i2++;
		if (needle[i2] == '\0')
			return ((char *)haystack + i);
		i++;
		i2 = 0;
	}
	return (0);
}

// int main(void)
// {
//     //the key expressin  && (i + i2) < len . 
//     //to ensure that the function will not search more
// 	char str[] = "Foo Bar BAz";
// 	char to_find[] = "Bar";
// 	char *result = ft_strnstr(str, to_find,7);
// 	printf("MY func : %s\n", result);
//     printf("The Oringinal func: %s\n",strnstr(str,to_find,7));

//     }

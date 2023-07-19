/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:35:15 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/18 18:29:34 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		ptr = (char *)malloc(1);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	ptr = (char *)malloc((len * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
// int main(void)
// {   
//     char *s1 = "tripouille";
//     char *test = ft_substr(s1 ,3,42000 );
//     printf("%s",test);
//     free(test);
// }

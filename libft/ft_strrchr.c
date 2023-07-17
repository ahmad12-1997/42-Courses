/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:59:13 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/11 19:59:00 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	str_len;

	str_len = ft_strlen(s);
	while (s[str_len] != (char)c && str_len != 0)
	{
		str_len--;
	}
	if (s[str_len] == (unsigned char)c)
		return ((char *)s + str_len);
	return (0);
}
// int main(void)
// {
//     //it will locates the last occurrence of a letter.
//     char c = 'a';
//     char *sent = "dfsdvaxfaddd sahmed";
//     printf("the original func: %s\n",strrchr(sent , c));
//     printf("My func : %s\n",ft_strrchr(sent ,c));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:06:06 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 12:26:07 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*trimmed;
	int		j;
	int		len;

	if (!s1 || !set)
		return (NULL);
	j = 0;
	while (s1[j] && ft_strchr(set, s1[j]) != 0)
		j++;
	i = 0;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i - 1]) != 0)
		i--;
	len = i - j;
	if (len <= 0)
		return (ft_strdup(""));
	trimmed = (char *)malloc(len + 1);
	if (!trimmed)
		return (0);
	trimmed = ft_memmove(trimmed, (s1 + j), len);
	trimmed[len] = '\0';
	return (trimmed);
}
// int main()
// {
//     //char *s  = "hmaham";
//     //char *s2 = "ham";
// 	char *s = ft_strtrim("   xxx   xxx", " x");   
// 	//char *trimmed = ft_strtrim(s,s2);
//     printf("%s",s);
// 	free(s);

//     //free(trimmed);
// }

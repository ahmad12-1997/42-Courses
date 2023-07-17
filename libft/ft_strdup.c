/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:56:20 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/08 16:30:16 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s1);
	ptr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}
/*#include<stdio.h>
#include<string.h>
int main(void)
{
    char source[] = "It is Fantastic";
    char *target = strdup(source);
    char *target2 = ft_strdup(source);
    printf("original : %s\n",target);
    printf("my func : %s",target2);
    free(target2);
    free(target);
    return (0);
}*/

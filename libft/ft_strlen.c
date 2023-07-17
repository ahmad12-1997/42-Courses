/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:24:08 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/08 22:18:37 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
// int main(void)
// {
//     char *s1 = "safsdg adf";
//     printf("The ft_strlen output : %lu\n",ft_strlen(s1));
//     printf("The original strlen :%lu\n",strlen(s1));

//     return (0);
// }

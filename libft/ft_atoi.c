/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:37:33 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 21:56:03 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_helper(const char *str, t_llint result, int *reverse, int *i);

int	ft_atoi(const char *str)
{
	int		i;
	int		reverse;
	t_llint	result;

	result = 0;
	i = 0;
	reverse = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ' )
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			reverse *= -1;
		i++;
	}
	result = 0;
	result = ft_atoi_helper(str, result, &reverse, &i);
	return (result);
}

int	ft_atoi_helper(const char *str, t_llint result, int *reverse, int *i)
{
	int	num;

	num = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		num = str[(*i)++] - '0';
		if (*reverse != -1 && result > ((LLONG_MAX - num) / 10))
			return (-1);
		if ((result * -1) < ((LLONG_MIN + num) / 10))
			return (0);
		result = result * 10 + num;
	}
	return ((result) * (*reverse));
}
// int main(void)
// {   
//     char ichar[] =   "9223372036854775807";
//     int resultatoi = ft_atoi(ichar);
//     printf("My func :%d\n",resultatoi);
//     printf("The Original func: %d\n",atoi(ichar));
// }
// // in the up function we are capturing the result
// // and returning the answer before the overflow happened.
// // -9billion  => 1
// //9billion => -1;
// // bigger than 9billion => -1
// //smaller than -9 billion == 0

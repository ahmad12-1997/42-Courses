/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:06:04 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/11 20:44:12 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	value;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n == -2147483648)
	{
		ft_putchar_fd(50, fd);
		n = 147483648;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	value = n % 10 + '0';
	ft_putchar_fd(value, fd);
}
// int main()
// {
//     int num = -50;
//     int fd = open("testfile.txt",O_RDWR);
//     ft_putnbr_fd(num,fd);
//     close(fd);
// }

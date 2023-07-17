/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:31:23 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/11 20:41:04 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main()
// {   //first create a file called testfile.txt
//     //we use open with #include <fcntl.h>
//     //there are other flags for open like O_RDWR
//     //O_RSWR for read and write.
//     int fd = open("testfile.txt",O_RDWR);
//     ft_putchar_fd('l',fd);
//     close(fd);
// }

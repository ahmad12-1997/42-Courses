/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:56:11 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/11 20:42:49 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
// int main()
// {   //first create a file called testfile.txt
//     //we use open with #include <fcntl.h>
//     //there are other flags for open like O_RDWR
//     //O_RSWR for read and write.
//     int fd = open("testfile.txt",O_RDWR);
//     char *str = "Hello ahmad kanbari";
//     ft_putendl_fd(str,fd);
//     close(fd);
// }

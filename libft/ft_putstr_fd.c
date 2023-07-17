/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:32:09 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/11 20:41:57 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}
// int main()
// {   //first create a file called testfile.txt
//     //we use open with #include <fcntl.h>
//     //there are other flags for open like O_RDWR
//     //O_RSWR for read and write.
//     int fd = open("testfile.txt",O_RDWR);
//     ft_putstr_fd("ahmad kanbari\n",fd);
//     close(fd);
// }

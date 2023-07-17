/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:10:43 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 19:51:35 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_ptr;

	n_ptr = (t_list *)malloc(sizeof(t_list));
	if (!n_ptr)
		return (NULL);
	n_ptr->content = content;
	n_ptr->next = NULL;
	return (n_ptr);
}
// void    ft_print_list(t_list *ptr)
// {
//     while (ptr != NULL)
//     {   
//         int i = 0;
//         printf("node : %d , content :%s\n",i,ptr->content);
//         i++;
//         ptr = ptr->next;
//     }
// }
// int main(void)
// {   
//     char c[] = "Hello Linked Lists";
//     t_list *new_ptr = ft_lstnew(c);
//     ft_print_list(new_ptr);
//     free(new_ptr);

// }

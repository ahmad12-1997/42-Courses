/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:38:43 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 19:54:41 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
//you have to update lst to new head which is the address of new.
// void    ft_print_list(t_list *ptr)
// {   
//     int i = 0;
//     while (ptr != NULL)
//     {   
//         printf("node : %d , content :%s\n",i,ptr->content);
//         i++;
//         ptr = ptr->next;
//     }
// }
// int main(void)
// {   
//     char c[] = "Hello Linked Lists";
//     char d[] = "new link 2";
//     t_list *new_ptr = ft_lstnew(c);
//     t_list *ptr2 = ft_lstnew(d);
//     ft_lstadd_front(&new_ptr,ptr2);
//     ft_print_list(ptr2);
//     free(new_ptr);
// }

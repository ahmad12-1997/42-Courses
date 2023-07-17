/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:56:09 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 20:05:28 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
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
//     char c[] = "last link";
//     char d[] = "new link 2";
//     char f[] = "new link 3";
//     t_list *new_ptr = ft_lstnew(c);
//     t_list *ptr2 = ft_lstnew(d);
//     t_list *ptr3 = ft_lstnew(f);
//     ft_lstadd_front(&new_ptr,ptr2);
//     //ptr3 will be the first
//     ft_lstadd_front(&ptr2,ptr3);
//     t_list *last = ft_lstlast(ptr3);
//     ft_print_list(ptr3);
//     //it should print last link
//     printf("last linke content:%s",last->content);
//     free(new_ptr);
//     free(ptr2);
//     free(ptr3);
// }

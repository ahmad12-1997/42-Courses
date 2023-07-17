/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:54:03 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 20:12:14 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// void    ft_print_list(t_list *ptr)
// {   
//     if (!ptr || ptr == NULL)
//     {
//         printf("The Linked Lists is empty");
//     }
//     int i = 0;
//     while (ptr != NULL)
//     {   
//         printf("node : %d , content :%s\n",i,ptr->content);
//         i++;
//         ptr = ptr->next;
//     }
// }
// void hi_func(void *ptr)
// {
//     char str[] = " Hi";
//     ft_memmove(ptr,str,10);
// }
// void    del_in_node(void *content)
// {   
//     if (!content)
//         return  ;
//     free(content);
//     printf("Content Deleted\n");
//     // char *con = "content deleted";
//     // return (con);
// }
// // add this line to the ft_lstclear funct to clarify 
// //printf("node deleted\n");
// int main(void)
// {   
//     //i have to allocate each string so i can use delete function.
//     t_list *ptr_head = ft_lstnew(ft_strdup("Link 1"));
//     t_list *ptr_1 = ft_lstnew(ft_strdup("Link 2"));
//     t_list *ptr_2 = ft_lstnew(ft_strdup("Link 3"));
//     //the probelm with this function that i lost 
//     //the reference to the remaining nodes.
//     ft_lstadd_back(&ptr_head,ptr_1);
//     ft_lstadd_back(&ptr_head,ptr_2);
//     ft_print_list(ptr_head);
//     printf("After Applying ft_lstiter\n");
//     ft_lstiter(ptr_head,&hi_func);
//     ft_print_list(ptr_head);
// }

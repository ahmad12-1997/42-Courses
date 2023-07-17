/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:54:54 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 20:08:28 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del (lst->content);
	free(lst);
}

// void    ft_print_list(t_list *ptr)
// {   
//     if (!ptr)
//     {
//         printf("The Linked Lists is empty");
//         return ;
//     }
//     int i = 0;
//     while (ptr != NULL)
//     {   
//         printf("node : %d , content :%s\n",i,ptr->content);
//         i++;
//         ptr = ptr->next;
//     }
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

//     //the probelm with this function that i lost 
//     //the reference to the remaining nodes.
//     ft_lstadd_back(&ptr_head,ptr_1);
//     ft_print_list(ptr_head);
//     ft_lstdelone(ptr_head,&del_in_node);
//     //ptr_head = NULL;
//     ft_print_list(ptr_head);

//     printf("The address : %p\n", ptr_head);

// }

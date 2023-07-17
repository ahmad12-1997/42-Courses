/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:10:28 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 21:19:58 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head_tmp;

	if (!lst || !(*lst) || !del)
		return ;
	head_tmp = *lst;
	while (head_tmp != NULL)
	{
		del(head_tmp->content);
		head_tmp = head_tmp->next;
		free(*lst);
		*lst = head_tmp;
	}
	*lst = NULL;
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
//     char *c= (char *)malloc(sizeof(8));
//     char *d= (char *)malloc(sizeof(8));
//     char *e= (char *)malloc(sizeof(8));
//     char cc[] = "Link 1";
//     char dd[] = "Link 2";
//     char ee[] = "Link 3";
//     c = ft_memmove(c,cc,7);
//     d = ft_memmove(d,dd,7);
//     e = ft_memmove(e,ee,7);
//     //i have to allocate each string so i can use delete function.
//     t_list *ptr_head = ft_lstnew(c);
//     t_list *new_ptr1 = ft_lstnew(d);
//     t_list *new_ptr2 = ft_lstnew(e);
//     ft_lstadd_back(&ptr_head,new_ptr1);
//     ft_lstadd_back(&ptr_head,new_ptr2);
//     ft_print_list(ptr_head);
//     ft_lstclear(&ptr_head,&del_in_node);
//     ft_print_list(ptr_head);
//     printf("the address: %p", ptr_head);
// }

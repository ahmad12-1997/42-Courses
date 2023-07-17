/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:08:36 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 20:28:12 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_lst;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	head_lst = NULL;
	while (lst != NULL)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&head_lst, del);
		}
		ft_lstadd_back(&head_lst, temp);
		lst = lst->next;
	}
	return (head_lst);
}
// so i were modifiyning the original list that i was 
// not supposed to do and I was adding stdup to the ft_lstnew
// even though thant the *f() should handle the allocation
// and return me the address.
//int ft_lstclear it is deleting a coppy of the 
// void    ft_print_list(t_list *ptr)
// {   
//     if (!ptr || ptr == NULL)
//         printf("The Linked Lists is empty");

//     int i = 0;
//     while (ptr != NULL)
//     {   
//         printf("node : %d , content :%s\n",i,(char *)ptr->content);
//         i++;
//         ptr = ptr->next;
//     }
// }
// void *hi_func(void *ptr)
// {
//     char str[] = " Hi .";
//     char *str_new = ft_strdup(ft_memmove(ptr,str,2));
//     return (str_new);
//         // return (NULL);
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
//     t_list *ptr_head = ft_lstnew(ft_strdup(" 1 2 3 "));
//     t_list *ptr_1 = ft_lstnew(ft_strdup("ss"));
//     t_list *ptr_2 = ft_lstnew(ft_strdup("-_-"));
//     ptr_2->next = NULL;

//     //the probelm with this function that i lost 
//     //the reference to the remaining nodes.
//     ft_lstadd_back(&ptr_head,ptr_1);
//     ft_lstadd_back(&ptr_head,ptr_2);
//     ft_print_list(ptr_head);
//     t_list *new_lst = ft_lstmap(ptr_head,hi_func,del_in_node);
//     printf("After Applying ft_lstMAP\n");
//     ft_print_list(new_lst);
//     ft_lstclear(&ptr_head,del_in_node);
//     ft_lstclear(&new_lst,del_in_node);
// }

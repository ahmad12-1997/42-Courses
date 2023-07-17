/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:08:36 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/16 22:39:47 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//it will clear the the whole list if it failed to allocate a node.
// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
//     t_list  *new_head;
//     t_list  *temp;
//     if(!lst || !f)
//         return (NULL);
//     temp = lst;
//     while(temp != NULL)
//     {
//         f(temp->content);
//         temp = temp->next;
//     }
//     if(!(new_head = ft_lstnew(ft_strdup(lst->content))))
//         return (NULL);
//     temp = new_head;
//     while (lst->next != NULL)
//     {   
//         lst = lst->next;
//         if(!(temp->next = ft_lstnew(ft_strdup(lst->content))))
//             ft_lstclear(&new_head, del);
//         temp = temp->next;
//     }
//     temp->next = NULL;
//     return (new_head);
// }

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_head;
    t_list  *temp;
    if(!lst || !f)
        return (NULL);
    temp = lst;
    while(temp != NULL)
    {
        f(temp->content);
        temp = temp->next;
    }
    if(!(new_head = ft_lstnew(ft_strdup(lst->content))))
        return (NULL);
    temp = new_head;
    while (lst->next != NULL)
    {   
        lst = lst->next;
        if(!(temp->next = ft_lstnew(ft_strdup(lst->content))))
            ft_lstclear(&new_head, del);
        temp = temp->next;
    }
    temp->next = ft_lstnew(ft_strdup(lst->content));
    return (new_head);
}

// //int ft_lstclear it is deleting a coppy of the 
// void    ft_print_list(t_list *ptr)
// {   
//     if (!ptr || ptr == NULL)
//         printf("The Linked Lists is empty");

//     int i = 0;
//     while (ptr != NULL)
//     {   
//         printf("node : %d , content :%s\n",i,ptr->content);
//         i++;
//         ptr = ptr->next;
//     }
// }
// void *hi_func(void *ptr)
// {
// //     //char str[] = " Hi .";
// //     //ptr = ptr;
// //     ///char *str_new = ft_memmove(ptr,str,10);
// //     //return (str_new);
//         return (NULL);
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
//     t_list *new_lst = ft_lstmap(ptr_head,&hi_func,&del_in_node);
//     printf("After Applying ft_lstMAP\n");
//     ft_print_list(new_lst);
// }

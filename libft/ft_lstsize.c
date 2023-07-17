/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:46:28 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 20:03:15 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	n_count;

	n_count = 0; 
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		n_count++;
		lst = lst->next;
	}
	return (n_count);
}
// int main()
// {
//     t_list *head = ft_lstnew("Hi");
//     t_list *new = ft_lstnew(" Ahmad");
//     //the new2 is the first list;
//     t_list *new2 = ft_lstnew(" Ahmad");
//     ft_lstadd_front(&head ,new);
//     ft_lstadd_front(&head ,new2);
//     printf("Count of Nodes in the list : %d",ft_lstsize(new2));  
// }

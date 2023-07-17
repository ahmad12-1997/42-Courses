/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:44:11 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 16:04:48 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{   
    t_list *ptr;
    
    if (!new)
        return ;
    if(!(*lst))
    {
        *lst = new;
        return ;
    }
    ptr = *lst;
    while(ptr->next != NULL)
    {   
        ptr= ptr->next;
    }
    ptr->next = new;
}
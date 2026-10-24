/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:05:16 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/23 14:07:50 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
        t_list  *newlst;
        t_list  *node;

        if (!lst)
                return (NULL);
        newlst = NULL;
        node = NULL;
        while (lst)
        {
                if (!f)
                        node = ft_lstnew(lst->content);
                else
                        node = ft_lstnew(f(lst->content));
                if (!node)
                {
                        ft_lstclear(&newlst, del);
                        return (NULL);
                }
                ft_lstadd_back(&newlst, node);
                lst = lst->next;
        }
        return (newlst);
}

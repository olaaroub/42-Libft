/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:58:11 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/19 19:52:29 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del((void *)lst->content);
		free(lst);
	}
}
// void    del(void *c)
// {
//     free(c);
// }
// int main()
// {
//     t_list *head = ft_lstnew((void*)1);
//     t_list *node2 = ft_lstnew((void*)2);
//     t_list *node3 = ft_lstnew((void*)3);
//     t_list *node4 = ft_lstnew((void*)4);

//     ft_lstadd_back(&head, node2);
//     // ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);
//     ft_lstadd_back(&head, node4);

//     t_list *ptr = ft_lstnew((void*)44);
//     // printf("%d\n", (int)ptr->content);
//     ft_lstdelone(node2, del);
//     // printf("%d\n", (int)node2->content);

// }
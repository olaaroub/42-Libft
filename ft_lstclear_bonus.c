/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:50:20 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/19 19:57:35 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (lst && del)
	{
		while (*lst)
		{
			ptr = *lst;
			del((*lst)->content);
			*lst = (*lst)->next;
			free(ptr);
		}
	}
}

// void	de(void *c)
// {
// 	printf("%d\n", c);
// }

// int main()
// {
//     t_list  *head = ft_lstnew((void*)1);
//     t_list  *node2 = ft_lstnew((void*)2);
//     t_list  *node3 = ft_lstnew((void*)3);
//     t_list  *node4 = ft_lstnew((void*)4);
//     t_list  *node5 = ft_lstnew((void*)5);

//     ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);
//     ft_lstadd_back(&head, node4);
//     ft_lstadd_back(&head, node5);

//     ft_lstclear(&head, de);
//     // t_list *ptr;
//     // ptr = head;
//     // while(ptr)
//     // {
//     //     printf("%d\n", (int)ptr->content);
//     //     ptr = ptr->next;
//     // }

// }
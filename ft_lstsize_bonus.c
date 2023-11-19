/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:04:32 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/19 19:53:25 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cmp;
	t_list	*ptr;

	ptr = lst;
	cmp = 0;
	while (ptr)
	{
		cmp++;
		ptr = ptr->next;
	}
	return (cmp);
}

// int main()
// {
//     t_list *head = ft_lstnew((void*)1);

//     t_list *node1 = ft_lstnew((void*)2);
//     t_list *node2 = ft_lstnew((void*)3);
//     t_list *node3 = ft_lstnew((void*)4);

//     ft_lstadd_front(&head, node1);
//     ft_lstadd_front(&head, node2);
//     ft_lstadd_front(&head, node3);

//     t_list *ptr;
//     ptr = head;

//     while(ptr)
//     {
//         printf("%d\n", (int)ptr->content);
//         ptr = ptr->next;
//     }
//     int count = ft_lstsize(head);
//     printf("size of the list is : %d\n", count);

// }
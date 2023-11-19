/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:11:48 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/19 19:53:05 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr)
	{
		if (ptr->next == NULL)
			break ;
		ptr = ptr->next;
	}
	return (ptr);
}

// int	main(void)
// {
// 	t_list *head = ft_lstnew((void *)1);
// 	t_list *node1 = ft_lstnew((void *)2);
// 	t_list *node2 = ft_lstnew((void *)3);
// 	t_list *node3 = ft_lstnew((void *)4);
// 	t_list *node4 = ft_lstnew((void *)5);
// 	t_list *node5 = ft_lstnew((void *)6);

// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node3);
// 	ft_lstadd_front(&head, node4);
// 	ft_lstadd_front(&head, node5);

// 	t_list *ptr;
// 	ptr = head;

// 	while (ptr)
// 	{
// 		printf("%d\n", (int)ptr->content);
// 		ptr = ptr->next;
// 	}

// 	t_list *last;

// 	last = ft_lstlast(head);
// 	printf("last nodes content is : %d\n", (int)last->content);
// }
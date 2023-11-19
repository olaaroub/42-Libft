/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:01:38 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/19 15:51:05 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst)
	{
		if (*lst)
		{
			current = *lst;
			while (current)
			{
				if (current->next == NULL)
				{
					current->next = new;
					break ;
				}
				current = current->next;
			}
		}
		else
			*lst = new;
	}
}

// int	main(void)
// {
// 	t_list *head = ft_lstnew((void *)1);
// 	t_list *node1 = ft_lstnew((void *)2);
// 	t_list *node2 = ft_lstnew((void *)3);
// 	t_list *node3 = ft_lstnew((void *)4);
// 	t_list *node4 = ft_lstnew((void *)5);
// 	t_list *node5 = ft_lstnew((void *)6);

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	ft_lstadd_back(&head, node4);
// 	ft_lstadd_back(&head, node5);

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
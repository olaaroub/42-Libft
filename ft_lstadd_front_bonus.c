/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:30:51 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/19 19:55:41 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
// 	t_list *list;
// 	t_list *new;
// 	t_list *head;
// 	t_list *new2;
// 	t_list *new3;

// 	head = ft_lstnew((void *)1);
// 	list = ft_lstnew((void *)2);
// 	new = ft_lstnew((void *)3);
// 	new2 = ft_lstnew((void *)34);
// 	new3 = ft_lstnew((void *)35);
// 	ft_lstadd_front(&head, list);
// 	ft_lstadd_front(&head, new);
// 	ft_lstadd_front(&head, new2);
// 	ft_lstadd_front(&head, new3);

// 	while (head)
// 	{
// 		printf("%d\n", (int)head->content);
// 		head = head->next;
// 	}
// }
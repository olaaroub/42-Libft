/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:26:58 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/20 14:36:20 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	void	*d;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		d = f(lst->content);
		new = ft_lstnew(d);
		if (!new)
		{
			del(d);
			ft_lstclear(&head, del);
			return (head);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}

// void *f(void *v)
// {
//     char *c = (char *)v;
//     char *result = malloc(strlen(c) + 1);
// 	int i = 0;
// 	// Duplicate the string to avoid modifying the original
//     if (!result)
//         return (NULL);

//     while (*c)
//     {
//         result[i] = toupper(*c);
//         i++;
// 		c++;
//     }
// 	result[i] = '\0';

//     return (result);
// }

// void	del(void *c)
// {
// 	free(c);
// }

// int	main(void)
// {
// 		t_list *head = ft_lstnew(strdup("apple"));
//     t_list *node2 = ft_lstnew(strdup("banana"));
//     t_list *node3 = ft_lstnew(strdup("cherry"));

//     ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);

//     // Display original list
//     t_list *ptr = head;
//     while (ptr)
//     {
//         printf("%s\n", (char *)ptr->content);
//         ptr = ptr->next;
//     }

//     // Map the list to uppercase
//     t_list *new_list = ft_lstmap(head, f, del);

//     printf("\nMapped List:\n");

//     // Display the mapped list
//     while (new_list)
//     {
//         printf("%s\n", (char *)new_list->content);
//         new_list = new_list->next;
//     }
// 	printf("\n\n\n");

// 	ptr = head;
// 	while (ptr)
//     {
//         printf("origi %s\n", (char *)ptr->content);
//         ptr = ptr->next;
//     }
// 	// t_list	*head = ft_lstnew((void*)1);
// 	// t_list *node2 = ft_lstnew((void*)2);
// 	// t_list *node3 = ft_lstnew((void*)3);
// 	// t_list *node4 = ft_lstnew((void*)4);
// 	// t_list *node5 = ft_lstnew((void*)5);

// 	// ft_lstadd_back(&head, node2);
// 	// ft_lstadd_back(&head, node3);
// 	// ft_lstadd_back(&head, node4);
// 	// ft_lstadd_back(&head, node5);

// 	// t_list *ptr = head;

// 	// while (ptr)
// 	// {
// 	// 	printf("%d\n", (int)ptr->content);
// 	// 	ptr = ptr->next;
// 	// }
// 	// t_list *new = ft_lstmap(head, f, del);

// 	// printf("\n\n\n");

// 	// while (new)
// 	// {
// 	// 	printf("%d\n", (int)new->content);
// 	// 	new = new->next;
// 	// }
// }
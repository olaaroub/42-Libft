/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:38:45 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/15 12:01:41 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct
// {
// 	int	age;
// 	int	logtime;
// }		student;

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if ((!d && !s) || len == 0)
		return (dest);
	if (d > s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char src[] = "hello this is oussama.";
//     char dest[100];
//     student student1;
//     student1.age = 15;
//     student1.logtime = 126;
//     student student2;
//     ft_memmove(dest, src, ft_strlen(src) + 1);

//     printf("%s\n", dest );
//     printf("%s\n", memmove(dest, src, ft_strlen(src) + 1 ));

//     printf("%d\n", student1.age);
//     printf("%d\n", student1.logtime);
//     ft_memmove(&student2,&student1, sizeof(student));
//     printf("%d\n", student2.age);
//     printf("%d\n", student2.logtime);
// }
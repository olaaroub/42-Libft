/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:38:50 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/15 11:32:16 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct
// {
// 	int	age;
// 	int	logtime;
// }		student;

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*char_dest;
	const char	*char_src;

	char_src = (const char *)src;
	char_dest = (char *)dest;
	i = 0;
	if ((char_dest == NULL) && (char_src == NULL))
		return (NULL);
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
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
//     ft_memcpy(dest, src, ft_strlen(src) + 1);

//     printf("%s\n", dest );
//     printf("%s\n", memcpy(dest, src, ft_strlen(src) + 1 ));

//     printf("%d\n", student1.age);
//     printf("%d\n", student1.logtime);
//     ft_memcpy(&student2,&student1, sizeof(student));
//     printf("%d\n", student2.age);
//     printf("%d\n", student2.logtime);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:59:06 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/15 11:28:32 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*char_s;
	size_t	i;

	char_s = (char *)s;
	i = 0;
	while (i < n)
	{
		char_s[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "abcde";
//     ft_bzero(str, 3);
//     for(int i = 0; i < 5; i++)
//     {
//         printf("%c", str[i]);
//     }
//     printf("\n");
// }
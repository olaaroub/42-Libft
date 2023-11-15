/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:22:24 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/15 11:34:16 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*char_b;
	unsigned char	d;
	size_t			i;

	char_b = (char *)b;
	d = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		char_b[i] = d;
		i++;
	}
	return (char_b);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char arr[10];
//     ft_memset(arr, 'c', sizeof(char) * 5);
//     ft_memset(arr + 5, 'd', sizeof(char) * 5);

//     for(int i = 0 ; i < (int)sizeof(arr); i++)
//         printf("%c", arr[i] );
//     printf("\n");
//     // memset(arr + 2, '*', 3);
//     // printf("%d %d %d %d %d  \n",arr[0], arr[1], arr[2], arr[3], arr[4] );

// }
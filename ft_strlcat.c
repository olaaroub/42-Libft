/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:59:27 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/10 16:24:25 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slenght;
	size_t	dlenght;
	char	*buff;

	buff = (char *)src;
	dlenght = strlen(dest);
	slenght = strlen(src);
	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < size - dlenght - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dlenght + slenght);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char dest[] = "oussama";
// 	const char src[] = "laaroubi";
// 	printf("%zu\n", ft_strlcat(dest, src, 6));
// }
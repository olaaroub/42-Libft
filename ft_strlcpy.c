/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:37:00 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/10 16:24:32 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lenght;
	char	*buf;

	buf = (char *)src;
	i = 0;
	while (src[i])
	{
		i++;
	}
	lenght = i;
	i = 0;
	if (size != 0)
	{
		while (buf[i] && i < size - 1)
		{
			dest[i] = buf[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (lenght);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char dest[] = "ouss";
// 	const char src[] = "hey";
// 	printf("%zu\n", ft_strlcpy(dest, src, 2));
// }
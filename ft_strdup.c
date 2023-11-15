/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:03:18 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/15 11:29:57 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*nv;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	nv = malloc(sizeof(char) * len + 1);
	if (!nv)
		return (NULL);
	while (s1[i])
	{
		nv[i] = s1[i];
		i++;
	}
	nv[i] = '\0';
	return (nv);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name[] = "a";

//     printf("%s\n", ft_strdup(name));
//     printf("%s\n", strdup(name));

// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:21:26 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/17 19:07:04 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*ptr;
	unsigned int	i;

	if (!s)
		return (NULL);
	ptr = malloc(ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	str = (char *)s;
	i = 0;
	while (str[i])
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>

// static char   ft_to(unsigned int i, char c)
// {
//     return (char)ft_toupper(c);
// }

// int main()
// {
//     const char  name[] = "oussama. ousss imaaddddddddddddd";
//     char    *f = ft_strmapi(name, ft_to);
//     printf("%s\n", f);
// }
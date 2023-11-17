/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:15:41 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/17 18:28:52 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	if(!s)
		return NULL;
	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, (s + start), len + 1);
	return (ptr);
}

// #include <stdio.h>
// int main()
// {
//     char const insta_acc[] = "your insta acc is : @oussama_laar.";
//     char *res = ft_substr(insta_acc, 100, 15);
//     printf("%s\n", res);
// }
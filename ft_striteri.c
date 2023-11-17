/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:38:29 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/17 18:00:42 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}

// void    ft_MAJ(unsigned int i, char *c)
// {
//     *c = ft_tolower(*c);
// }
// // #include <stdio.h>

// // int main()
// // {
// //     char name[] = "HRLLOOOOS K < KGL:Dg";
// //     ft_striteri(name, ft_MAJ);
// //     printf("%s\n",name);

// // }
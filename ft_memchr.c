/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:31:08 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/14 11:53:05 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void    *ft_memchr(const void *s, int c, size_t n)
// {

// }


#include <stdio.h>
#include <string.h>

int main()
{
    char data[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    char *pos = memchr(data, 'f', 6);



    printf("%c\n", pos[1]);
    printf("%c\n", pos[0]);

}

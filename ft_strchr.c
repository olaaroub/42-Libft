/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:15:14 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/10 20:56:09 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char *str, int c)
{
    size_t i;
    char    *buff;


    buff = (char *)str;
    i = 0;
    while (buff[i] || i <= strlen(buff))
    {
        if(buff[i] == (char)c)
            return (buff+i);
        i++;
    }
    return NULL;
}


int main()
{
    char    string [] = "oussama @laaroubi.";
    char    s = 'u';
    printf("%s\n", strchr(string, s) );
    printf("%s\n", ft_strchr(string, s) );

}
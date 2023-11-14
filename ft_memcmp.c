/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:07:36 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/14 19:09:14 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char *char_s1;
    unsigned char *char_s2;

    char_s1 = (unsigned char *)str1;
    char_s2 = (unsigned char *)str2;
    if(!char_s1 || !char_s2)
        return 0;
    while (n--)
    {
        if(*char_s1 != *char_s2)
            return (*char_s1 - *char_s2);
        char_s1++;
        char_s2++;
    }
    return 0;

}
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "ooussama";
    char s2[] = "oussama";

    printf("%d\n", ft_memcmp(s1, s2, 3));
    printf("%d\n", memcmp(s1, s2, 3));
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:59:28 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/15 23:47:02 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *ptr;
    char    *buff;

    ptr = malloc(ft_strlen(s1) - ft_strlen(set) + 1);
    if(!ptr)
        return NULL;
    buff = ptr;
    i = 0;
    j = 0;
    while(s1[i])
    {
        j = 0;
        while(set[j])
        {
            if(s1[i] == set[j])
                break;
            j++;
        }
        i++;










        j = i +1;
        if(s1[i] == set[j])
        {
            while(s1[i] == set[j])
            {
                i++;
                j++;
            }
        }
        *buff = s1[i];
        buff++;
        i++;
    }
}
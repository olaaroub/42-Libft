/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:31:08 by olaaroub          #+#    #+#             */
/*   Updated: 2023/11/14 18:47:48 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *p = (unsigned char *)s;
    unsigned char *found_char = NULL;
    size_t i = 0;
    while((s != NULL) && (n--))
    {
        if(p[i] != (unsigned char)c)
            i++;
        else
        {
            found_char = p+i;
            break;
        }

    }
    return(found_char);


}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // char data[] = "my instagram acc is : @oussama_laar.";

    // printf("your instagram acc is : %s \n", ft_memchr(data, '@', ft_strlen(data)));
    char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;

    // On recherche une valeur inhéxistante :
    void * found = ft_memchr( data, 57, size );
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

    // On recherche une valeur existante :
    found = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }
    printf("%d\n", memcmp("oussama", "oussama", 7));

    return EXIT_SUCCESS;
}


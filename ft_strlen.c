/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:50:06 by sanmetol          #+#    #+#             */
/*   Updated: 2023/05/19 19:39:30 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* int main()
{
    char *str;
	
	str = "Hola buenas";
    size_t len = ft_strlen(str);
    printf("ft_strlen: %zu\n", len);
    size_t len_orig = strlen(str);
    printf("strlen:    %zu\n", len_orig);
    if (len == len_orig)
        printf("La longitud es igual.\n");
    else
        printf("La longitud es diferente.\n");
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:50:20 by sanmetol          #+#    #+#             */
/*   Updated: 2023/05/19 18:15:35 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = b;
	while (len-- > 0)
		*str++ = (unsigned char) c;
	return (b);
}

/*int main() {
    char str[] = "hola";
    ft_memset(str, 'A', 2);
    for (int i = 0; i < sizeof(str) - 1; i++) {
        printf("%c ", str[i]);
    }
	/////ORIGINAL/////
	char str_o[] = "hola";
    memset(str_o, 'A', 2);
	printf("\nORIGINAL\n");
    for (int i = 0; i < sizeof(str_o) - 1; i++) {
        printf("%c ", str_o[i]);
    }
    return 0;
}*/
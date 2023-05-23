/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:03:35 by sanmetol          #+#    #+#             */
/*   Updated: 2023/04/27 17:46:21 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/* int main() {
    char str[] = "hola";
	char dst[10];
	int bytes = 2;
    ft_memcpy(dst, str, bytes);
    for (int i = 0; i < sizeof(str); i++) {
        printf("%c ", dst[i]);
    }
	/////ORIGINAL/////
	char str_o[] = "hola";
	char dst_o[10];
    memcpy(dst_o, str_o, bytes);
	printf("\nORIGINAL\n");
    for (int i = 0; i < sizeof(str_o); i++) {
        printf("%c ", dst_o[i]);
    }
    return 0;
} */
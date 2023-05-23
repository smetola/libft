/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:45:10 by sanmetol          #+#    #+#             */
/*   Updated: 2023/04/27 17:46:24 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == 0 && src == 0)
		return (0);
	if (dst <= src || (unsigned char *)dst >= ((unsigned char *)src + len))
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dst);
}

/* int main() {
    char str[] = "hola que tal";
    ft_memmove(str + 2, str, 5);
    for (int i = 0; i < sizeof(str); i++) {
        printf("%c", str[i]);
    }

	/////ORIGINAL/////
	char str_o[] = "hola que tal";
    memmove(str_o + 2, str_o, 5);
	printf("\nORIGINAL\n");
	printf("%s\n", str_o);
    return 0;
} */
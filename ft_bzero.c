/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:15:23 by sanmetol          #+#    #+#             */
/*   Updated: 2023/04/27 17:42:56 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n--)
		*str++ = '\0';
}

/* int	main() {
	int siu[] = {1, 2, 3, 4, 5};
	int bytes = 8;
	ft_bzero(siu, bytes);
	for (int i = 0; i < sizeof(siu); i++) {
		printf("%d ", siu[i]);
	}
	//////ORIGINAL/////
	int siu_o[] = {1, 2, 3, 4, 5};
	bzero(siu_o, bytes);
	printf("\nORIGINAL\n");
	for (int i = 0; i < sizeof(siu); i++) {
		printf("%d ", siu_o[i]);
	}
} */
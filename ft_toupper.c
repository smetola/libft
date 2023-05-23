/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:43:12 by sanmetol          #+#    #+#             */
/*   Updated: 2023/04/27 17:47:10 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/* int	main(void)
{
	char c = 65;
	printf("%c", ft_toupper(c));

	/////////ORIGINAL//////////
	printf("\nORIGINAL\n%c", toupper(c));
} */
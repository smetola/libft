/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:18:59 by sanmetol          #+#    #+#             */
/*   Updated: 2023/04/27 17:46:13 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = s;

	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}

/* int  main(void)
{
	 /////MINE/////
	 char *s = "hola";
	 printf("%s%s%s", "nu", ft_memchr(s, 'o', 5), "ll");

	 //////ORIGINAL/////
	 char *s_o = "hola";
	 printf("\nORIGINAL:\n%s%s%s", "nu", memchr(s_o, 'o', 5), "ll");
} */
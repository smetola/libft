/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 22:54:04 by sanmetol          #+#    #+#             */
/*   Updated: 2023/04/28 15:10:26 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cr;

	cr = (char)c;
	while (*s)
	{
		if (*s == cr)
			return ((char *)(s));
		s++;
	}
	if (*s == cr)
		return ((char *)(s));
	return (NULL);
}

/* int  main(void)
{
     /////MINE/////
     char *s = "hola";
     printf("%s%s%s", "nu", ft_strchr(s, 'o'), "ll");

     //////ORIGINAL/////
     char *s_o = "hola";
     printf("\nORIGINAL:\n%s%s%s", "nu", strchr(s_o, 'o'), "ll");
} */
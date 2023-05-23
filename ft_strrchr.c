/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:22:38 by sanmetol          #+#    #+#             */
/*   Updated: 2023/04/28 15:57:23 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cr;

	i = 0;
	cr = (char)c;
	while (*s)
	{
		s++;
		i++;
	}
	while (i > 0)
	{
		if (*s == cr)
			return ((char *)(s));
		s--;
		i--;
	}
	if (*s == cr)
		return ((char *)(s));
	return (0);
}

/* int  main(void)
{
     /////MINE/////
     char *s = "olor";
     printf("%s", ft_strrchr(s, 'o'));

     //////ORIGINAL/////
     char *s_o = "olor";
     printf("\nORIGINAL:\n%s", strrchr(s_o, 'o'));
} */
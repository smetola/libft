/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:42:06 by sanmetol          #+#    #+#             */
/*   Updated: 2023/05/19 20:10:26 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void  ft_mayus(unsigned int i, char *c)
{
	if (i % 2 != 0)
		*c = *c - 32;
}

int  main(void)
{
	char  str[] = "hola";

	ft_striteri(&str[0], ft_mayus);
	printf("%s", str);
} */
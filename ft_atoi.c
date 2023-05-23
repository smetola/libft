/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:24:07 by sanmetol          #+#    #+#             */
/*   Updated: 2023/04/27 17:44:57 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	neg;

	i = 0;
	n = 0;
	neg = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = str[i] - '0' + n * 10;
		i++;
	}
	if (neg == 1)
		return (-n);
	return (n);
}

/* int	main(void)
{
	printf("%d", ft_atoi(" -1234567"));
	////ORIGINAL/////
	printf("\nORIGINAL\n%d", atoi(" -1234567"));
} */
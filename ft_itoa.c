/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:51:28 by sanmetol          #+#    #+#             */
/*   Updated: 2023/05/19 12:54:01 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
	{
		count = 1;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		count++;
		nbr = nbr / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		digits;
	int		neg;
	char	*str;
	long	nbr;

	nbr = n;
	digits = count_digits(nbr);
	neg = 0;
	if (nbr < 0)
	{
		neg = 1;
		nbr = -nbr;
	}
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	while (digits--)
	{
		str[digits] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}

/* int  main(void)
{
  printf("%s\n", ft_itoa(-2147483648));
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:11:39 by sanmetol          #+#    #+#             */
/*   Updated: 2023/04/27 17:46:55 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/* int	main(void)
{
	///MINE///
	printf("%d", ft_strncmp("test\200", "test\0", 6));
	///ORIGINAL///
	printf("\nORIGINAL:\n%d", strncmp("test\200", "test\0", 6));
} */
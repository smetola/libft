/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:49:26 by sanmetol          #+#    #+#             */
/*   Updated: 2023/04/27 17:46:59 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] != '\0' && i + j < len
				&& haystack[i + j] == needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	printf("%s", ft_strnstr("hola que tal", "que", 10));
	printf("%s%s","\nORIGINAL\n", strnstr("hola que tal", "que", 10));
} */

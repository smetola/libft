/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:59:15 by sanmetol          #+#    #+#             */
/*   Updated: 2023/05/11 13:00:42 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_l;
	size_t	start;
	size_t	end;
	char	*trimmed;

	s1_l = ft_strlen(s1);
	start = 0;
	while (start < s1_l && ft_strchr(set, s1[start]))
		start++;
	end = s1_l;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed = malloc(end - start + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_memcpy(trimmed, s1 + start, end - start);
	trimmed[end - start] = '\0';
	return (trimmed);
}

/* int main(void)
{
  printf("%s", ft_strtrim("XlentejasX", 'X'));
} */